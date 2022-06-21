#include "Canva.h"

Canva::Canva() {

}

void Canva::paintShapes(Shape* figura, int measure, int secondaryOption, Position* posicion) {
    system("cls");
    figura->draw(measure, secondaryOption, posicion);
}