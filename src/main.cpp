#include <iostream>
#include <sstream>
#include "screen.h"


int main(){
    std::cout << "26.3 Implementing a Desktop Window Manager" << std::endl;
    
    Screen screen;
    std::string command;

    while(true){
        std::cout << "Enter a command (move/resize/display/close): " << std::endl;
        std::cin >> command;

        if(command == "close"){
            return 0;
        } else if(command =="move"){
            std::string buffer;

            std::cout << "Where to move the window?" << std::endl;
            std::cout << "Enter the coordinates (x, y): ";
            
            std::cin >> buffer;
            std::stringstream buffer_stream(buffer); 
            int x{}, y{};
            buffer_stream >> x >> y;

            Vector* shift_vec = new Vector(x,y);
            screen.move(shift_vec);
            delete shift_vec;

        } else if(command == "resize"){
            screen.resize();
        } else if(command == "display") {
            screen.display();
        } else {
            screen.clear();
            std::cout << "Uncknown command. Try again." << std::endl;
        }
    }
}