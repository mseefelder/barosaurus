#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cv.h>
#include <highgui.h>

using namespace std;
using namespace cv;

//------Globals-----

//Line marking window name
string windowName = "Line marker";

//two Points make aLine
struct aLine{
    Point p1;
    Point p2;

    aLine(){p1.x=0;p2.x=0;p1.y=0;p2.y=0;}

    aLine(int p1x, int p1y, int p2x, int p2y)  {
        p1.x = p1x;
        p1.y = p1y;
        p2.x = p2x;
        p2.y = p2y;
    }

    void drawaLine(Mat image, Scalar color){
        line(image, p1, p2, color);
    }
};

// two aLines make a lineSet (0 bottom line, 1 top line)
//class lineSet{
struct lineSet{
//public: aLine set[2];
    aLine set[2];
    bool bottom;
    bool top;

    lineSet(){
        aLine line0;
        set[0] = line0;
        set[1] = line0;
    }

    void setLine(int index, aLine myLine){
        if (index > 1){cout<<"Index out of range;";}
        set[index] = myLine;
        if(index == 0){bottom = true;}
        else if (index == 1){top = true;}
    }

    bool hasBottom(){return bottom;}
    bool hasTop(){return top;}
};

lineSet markedLines; //to be used during measuring

//the calibration is done by taking 5 pictures, thus 5 lineSets
struct fiveLineSets{
    lineSet set[5];
    bool one, two, three, four, five;

    fiveLineSets(){
        lineSet lineSetZero;
        for (int i; i<5; i++){set[i] = lineSetZero;}
        one = false; two = false; three = false; four = false; five = false;
    }

    void setSet(int index, lineSet mySet){
        if (index>4){cout<<"Index out of range;";}
        set[index] = mySet;
        switch(index){
        case 0: one = true; break;
        case 1: two = true; break;
        case 2: three = true; break;
        case 3: four = true; break;
        case 4: five = true; break;
        }
    }

    bool isFull(){
        return one && two && three && four && five;
    }
};

//group of lineSets used for calibration
fiveLineSets calib;

Mat img, workingImage;
string draft = "draft.jpg";

//While the program is running, the webcam is always on
cv::VideoCapture cap(0);

//---------------------------

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void onMouse(int event, int x, int y, int flags, void* userdata)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        //sets upper line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 0, 255));
        imshow(windowName, img);
        markedLines.setLine(1,templine);
    }
    else if  ( event == EVENT_RBUTTONDOWN )
    {
        //sets bottom line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 0, 255));
        imshow(windowName, img);
        markedLines.setLine(0,templine);
    }
    else if  ( event == EVENT_MBUTTONDOWN )
    {
        //take another picture
        destroyWindow(windowName);
    }
    else if ( event == EVENT_MOUSEMOVE )
    {
        //draws mouse line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 255, 255));
        if (markedLines.hasBottom()){markedLines.set[0].drawaLine(img, Scalar(0, 255, 0));}
        if (markedLines.hasTop()){markedLines.set[1].drawaLine(img, Scalar(255, 0, 0));}
        imshow(windowName, img);
    }
}

void lineMarker(){

    //Clean markedLines
    lineSet zeroSet;
    markedLines = zeroSet;

    // Read image from file
    img = imread(draft);

    //if fail to read the image
    if ( workingImage.empty() )
    {
        cout << "Error loading the image" << endl;
        //return -1;
    }

    //Create a window
    namedWindow(windowName, 1);

    //set the callback function for any mouse event
    setMouseCallback(windowName, onMouse, NULL);

    //show the image
    imshow(windowName, img);

    // Wait until user press some key
    waitKey(0);
    //Vai chamar o método de cálculo com markedLines como parâmetro
    cout<<"Linha inferior: "<<markedLines.set[0].p1.y<<" Linha superior: "<<markedLines.set[1].p1.y<<endl;
    destroyWindow(windowName);
}

void MainWindow::on_btnCamera_clicked()
{
    namedWindow("Disp");
    Mat frame;

    do{
        cap >> frame;
        imshow("Disp",frame);
    }while(cv::waitKey(10)<0);

    cap >> frame;

    imwrite(draft, frame); //saves image on disk

    destroyWindow("Disp");

    lineMarker();
}
