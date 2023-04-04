#include "screen.h"

Screen::Screen(){
    width = 80;
    height = 50;
    win = new Window();
}

Screen::~Screen(){
    delete win;
}

bool Screen::move(Vector* shift_vec){
    Vector* temp = new Vector;

    temp->setX(win->getVec()->getX() + shift_vec->getX()); 
    temp->setY(win->getVec()->getY() + shift_vec->getY());
    
    if(temp->getX() < 0 || temp->getX() >= width || temp->getY() < 0 || temp->getY() >= height){
        std::cout << "This shift is not possible." << std::endl;
        delete temp;
        return false;
    }

    win->setVec(temp->getX(), temp->getY());
    delete temp;

    std::cout << "New coordinates: ";
    win->getVec()->getInfo();

     //resize, if part of window out of screen size
    if((win->getWidth() + win->getVec()->getX()) > width) win->setWidth(width - win->getVec()->getX());
    if((win->getHeight() + win->getVec()->getY()) > height) win->setHeight(height - win->getVec()->getY());

    return true;
}

bool Screen::resize(){
    std::cout << "Enter the new size of window (width, height)" << std::endl;
    int new_width{}, new_heigth{};
    std::cin >> new_width >> new_heigth;

    if(new_width <= 0 || new_width > width || new_heigth <= 0 || new_heigth > height) {
        std::cout << "Incorrect size." << std::endl;
        return false;
    }

    win->setHeight(new_heigth);
    win->setWidth(new_width);
    std::cout << "New window size: width = " << win->getWidth() << ", height = " << win->getHeight() << std::endl;
    
    return true;
   
}

void Screen::display(){
    for(int y = 0; y < height; ++y){
        for(int x = 0; x < width; ++x){
            if((x >= win->getVec()->getX()) && (x < (win->getVec()->getX() + win->getWidth()))
                && (y >= win->getVec()->getY()) && (y < (win->getVec()->getY() + win->getHeight()))){

                    std::cout << '1';
            } else {
                    std::cout << '0';
            }
        }
        std::cout << std::endl;
    }
}

void Screen::clear(){
    system("clear");
}
