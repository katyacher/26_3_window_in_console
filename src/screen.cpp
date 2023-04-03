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
    if((win->getVec()->getX() + shift_vec->getX()) < 0 || (win->getVec()->getY() + shift_vec->getY()) < 0){
        std::cout << "Данное смещение невозможно" << std::endl;
        return false;
    }
    if((shift_vec->getX() + win->getWidth()) > width || (shift_vec->getY() + win->getHeight()) > height){//screen_width screen_height
        std::cout << "Данное смещение невозможно" << std::endl;
        return false;
    }
    win->getVec()->setX(shift_vec->getX());
    win->getVec()->setY(shift_vec->getY());
    return true;
}

bool Screen::resize(){
    std::cout << "Enter the new size of window (width, height)" << std::endl;
    std::string buffer;
    std::cin >> buffer;
    std::stringstream buffer_stream(buffer);
    int new_width{}, new_heigth{};
    buffer_stream >> new_width >> new_heigth;

    if(new_width < 0|| new_heigth < 0) return false;

    if((win->getVec()->getX() + new_width) > 80 || (win->getVec()->getY() + new_heigth) > 50){
        std::cout << "Окно выходит за пределы экрана" << std::endl;
        return false;
    }
    win->setHeight(new_heigth);
    win->setWidth(new_width);
    return true;
}

void Screen::display(){
    for(int y = 0; y < height; ++y){
        for(int x = 0; x < width; ++x){
            if(x >= win->getVec()->getX() || x < win->getVec()->getX() + win->getWidth()
                    || y >= win->getVec()->getY() || y < win->getVec()->getY() + win->getHeight()){

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
