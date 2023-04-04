#include <iostream>
#include "vector.h"

Vector::Vector(){
    _x = 0;
    _y = 0;
}

void Vector::setX(int x){
    _x = x;
}

void Vector::setY(int y){
    _y = y;
}

int Vector::getX(){
    return _x;
}

int Vector::getY(){
    return _y;
}

void Vector::getInfo(){
    std::cout << "(" << _x << ", " << _y << ")" << std::endl;
}

/*
Vector Vector::operator+  (const Vector& param){
  Vector temp;
  temp.setX(_x + param._x);
  temp.setY(_y + param._y);
  return temp;
}
*/
