#pragma once
#include <iostream>
#include "Position.h"

using namespace std;

class Shape{
public:
    virtual void draw(int measure, int secondaryOption, Position* posicion);
};

