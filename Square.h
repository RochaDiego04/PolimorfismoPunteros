#pragma once
#include "Shape.h" 
#include "Position.h"
class Square : public Shape{
public:
    Square();
    void draw(int, int, Position* posicion);
};
