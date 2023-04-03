#include "vector.h"

Vector::Vector(){
    _x = 0;
    _y = 0;
}

void Vector::setX(int x){
    if(x < 0 || x >= 80) {
        _x = 0;
    // return false std::cout << "Выход за границы экрана";
    } else {
        _x = x;
    }
}

void Vector::setY(int y){
    if(y < 0 || y >= 50) {
       _y = 0;
    // return false std::cout << "Выход за границы экрана";
    } else {
        _y = y;
    }
}

int Vector::getX(){
    return _x;
}

int Vector::getY(){
    return _y;
}
Vector Vector::operator+ (const Vector& param){
  Vector temp;
  temp.setX(_x + param._x);
  temp.setY(_y + param._y);
  return temp;
}
