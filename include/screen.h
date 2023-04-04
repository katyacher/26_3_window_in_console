#include <iostream>
#include "window.h"

class Screen{
    int width;
    int height;
    Window* win;
 public:
    Screen();
    ~Screen();
    
    /**
     *   \brief Команда move принимает вектор, на который надо сместить окно на экране. 
     *   Сообщение с новыми координатами окна появляется на экране.
    */
    bool move( Vector* shift_vec);

    /**
     * \brief Команда resize запрашивает из стандартного ввода новый размер окна. 
     * После изменения размера сообщение с новым размером выводится на экране.
    */
    bool resize();

    /**
     * \brief Команда display выводит текущее изображение монитора в консоль. 
     * 0 — это пиксель вне области окна, 1 — с окном.
    */
    void display();

    void clear();   
};