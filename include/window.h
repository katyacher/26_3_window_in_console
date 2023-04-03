#include "vector.h"

class Window{
    int _width;
    int _height;
    Vector* leftUpCorner;

public:
    Window();
    ~Window();

    void setWidth(int width);
    void setHeight(int height);
    void setVector(int x, int y);
    int getWidth();
    int getHeight();
    Vector* getVec();
};