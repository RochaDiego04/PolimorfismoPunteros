#pragma once
#include "Shape.h"
#include "Position.h"
class Triangle : public Shape {
public:
    Triangle();
    void draw(int, int, Position* posicion);
};
