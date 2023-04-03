#include <iostream>
#include "window.h"

Window::Window(){
    _width = 10;
    _height = 10;
    leftUpCorner = new Vector(0,0);
}

Window::~Window(){
    std::cout << "Window closed" << std::endl;
    delete leftUpCorner;
}
void Window::setWidth(int width){
    _width = width;
}

void Window::setHeight(int height){
    _height = height;
}

void Window::setVector(int x, int y){
    leftUpCorner->setX(x);
    leftUpCorner->setY(y);
}

int Window::getWidth(){
    return _width;
}

int Window::getHeight(){
    return _height;
}

Vector* Window::getVec(){
    return leftUpCorner;
}
