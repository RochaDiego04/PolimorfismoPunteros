#pragma once
#include <iostream>
#include <cstdlib>
#include "Shape.h"
#include "Position.h"
using namespace std;

class Canva {
public:
    Canva();
    void paintShapes (Shape* figura, int measure,int secondaryOption, Position* posicion);
};