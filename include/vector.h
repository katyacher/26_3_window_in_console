#pragma once
class Vector{
    int _x;
    int _y;

 public:
    Vector();
    Vector(int x, int y): _x(x), _y(y){};

    void setX(int x);
    void setY(int x);

    int getX();
    int getY();
    
    Vector operator+ (const Vector& param);
};