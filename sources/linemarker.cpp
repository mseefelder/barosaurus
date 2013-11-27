#include "linemarker.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "janeladecalibragem.h"
#include <QWidget>
#include <cv.h>
#include <highgui.h>
#include "camera.h"

//to be used during measuring
lineSet markedLines;

//Line marking window name
string lineMarkerName = "Line marker";

Mat img, workingImage;
string draft = "draft.jpg";

//While the program is running, the webcam is always on
cv::VideoCapture cap(0);

LineMarker::LineMarker()
{
}

void onMouse(int event, int x, int y, int flags, void* userdata)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        //sets upper line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 0, 255));
        imshow(lineMarkerName, img);
        markedLines.setLine(1,templine);
    }
    else if  ( event == EVENT_RBUTTONDOWN )
    {
        //sets bottom line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 0, 255));
        imshow(lineMarkerName, img);
        markedLines.setLine(0,templine);
    }
    else if  ( event == EVENT_MBUTTONDOWN )
    {
        //take another picture
        destroyWindow(lineMarkerName);
    }
    else if ( event == EVENT_MOUSEMOVE )
    {
        //draws mouse line
        img = imread(draft);
        aLine templine(0, y, img.size().width, y);
        templine.drawaLine(img, Scalar(0, 255, 255));
        if (markedLines.hasBottom()){markedLines.set[0].drawaLine(img, Scalar(0, 255, 0));}
        if (markedLines.hasTop()){markedLines.set[1].drawaLine(img, Scalar(255, 0, 0));}
        imshow(lineMarkerName, img);
    }
}

lineSet LineMarker::markLines(){

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
    namedWindow(lineMarkerName, 1);

    //set the callback function for any mouse event
    setMouseCallback(lineMarkerName, onMouse, NULL);

    //show the image
    imshow(lineMarkerName, img);

    // Wait until user press some key
    waitKey(0);
    //Vai chamar o método de cálculo com markedLines como parâmetro
    cout<<"Linha inferior: "<<markedLines.set[0].p1.y<<" Linha superior: "<<markedLines.set[1].p1.y<<endl;
    return markedLines; // this index will be used to save different lineSets on the fiveLineSets calibration variable
    destroyWindow(lineMarkerName);
}

lineSet LineMarker::displayCamera(){
    namedWindow("Disp");
    Mat frame;

    do{
        cap >> frame;
        imshow("Disp",frame);
    }while(cv::waitKey(10)<0);

    cap >> frame;

    imwrite(draft, frame); //saves image on disk

    destroyWindow("Disp");

    return markLines();
}
