#ifndef LINEMARKER_H
#define LINEMARKER_H

class LineMarker
{
public:
    LineMarker();
    void onMouse(int event, int x, int y, int flags, void* userdata);
    void markLines();
};

#endif // LINEMARKER_H
