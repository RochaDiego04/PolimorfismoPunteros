#include "Menu.h"



Menu::Menu() {
    option = 0;
    measure = 0;
    secondaryOption = 0;
    return_ = true;
    Square* cuadrado = nullptr;
    Triangle* triangulo = nullptr;
    Position* posicion = nullptr;
    Canva lienzo;
}


void Menu::run() {
    while (option != 3) {
        printMainMenu();
        setMainMenuOption();
        createShapes();
    }
}

void Menu::printMainMenu() {
    system("cls");
    cout << "Choice an option from the menu" << endl;
    cout << "1. Draw a square" << endl;
    cout << "2. Draw a triangle" << endl;
    cout << "3. Salir" << endl;
}

void Menu::setMainMenuOption() {
    cin >> option;
    if (option > 0 || option < 4) {
    }
    else {
        cout << "\nWrite an option from the menu";
        setMainMenuOption();
    }
}

void Menu::createShapes() {
    switch (option) {
    case 1: 
        cuadrado = new Square;
        askMeasure();
        printSecondaryMenu();
        setSecondaryMenuOption();
        shapePrintLoop(cuadrado, measure, secondaryOption, posicion);
        break;
    case 2: 
        triangulo = new Triangle;
        askMeasure();
        printSecondaryMenu();
        setSecondaryMenuOption();
        shapePrintLoop(triangulo, measure, secondaryOption, posicion);
        break;
    case 3: break;
    }
}

void Menu::shapePrintLoop(Shape* shape, int measure, int secondaryOption,Position* posicion) {
    posicion = new Position;
    
    while (return_) {
        lienzo.paintShapes(shape, measure, secondaryOption, posicion);
        printInstructionsForMovement();
        posicion->setOption();
        return_ = posicion->evaluateOption();//la variable del menu debe ser igual a la de la posicion, para que cuando sea falsa, salga del while
    }
    //return_ = true;
    run();  //al salir del while se vuelve a ejecutar el menu
}

void Menu::askMeasure() {
    if (option == 1) {
        cout << "Write the measure of the base (2-50)"<<endl;
        setMeasure();
    }
    else {
        cout << "Write the measure of the height (2-50)"<<endl;
        setMeasure();
    }
}

void Menu::setMeasure() {
    cin >> measure;
}

void Menu::printSecondaryMenu() {
    cout << "Do you want a filled or a hollow shape?"<<endl;
    cout << "1. Hollow Shape"<<endl;
    cout << "2. Filled Shape"<<endl;
}

void Menu::setSecondaryMenuOption() {
    cin >> secondaryOption;
}

void Menu::printInstructionsForMovement() {
    cout << "\n\n";
    cout << "w to go up"<<endl;
    cout << "a for move to the left" << endl;
    cout << "s to go down" << endl;
    cout << "d for move to the right" << endl;
    cout << "-----------------------"<<endl;
    cout << "b return to the menu" << endl;
}
