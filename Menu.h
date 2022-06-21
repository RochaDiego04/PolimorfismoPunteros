#pragma once
#include <iostream>
#include <cstdlib>
#include "Shape.h"
#include "Canva.h"
#include "Square.h"
#include "Triangle.h"
#include "Position.h"
using namespace std;

class Menu {
public:
    Menu();
    int option;
    int secondaryOption;
    int measure;
    bool return_;
    Square* cuadrado;
    Triangle* triangulo;
    Canva lienzo;
    Position* posicion;

    void run();
    void printMainMenu();
    void setMainMenuOption();
    void printSecondaryMenu();
    void setSecondaryMenuOption();
    void createShapes();
    void askMeasure();
    void setMeasure();
    void shapePrintLoop(Shape*,int ,int,Position*);
    void printInstructionsForMovement();
};