#include "linemarker.h"

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

void markLines(){

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
    destroyWindow(lineMarkerName);
}
