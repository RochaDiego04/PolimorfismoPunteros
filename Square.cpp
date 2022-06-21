#include "Square.h"
using namespace std;
Square::Square() {

}


void Square::draw(int measure, int secondaryOption, Position* posicion) {

	if (secondaryOption == 1) {
		if (measure > 1 && measure <= 50)
			posicion->movimientoEjeY();
			for (int i = 0; i < measure; i++) {	//vuelve a mandar al siguiente for de abajo(hasta que termine las columnas de longitud
				posicion->movimientoEjeX();
				for (int y = 0; y < measure; y++) {	//dibuja 4 caracteres por ejemplo
					if ((i == 0 || y == 0) || (i == measure - 1) || (y == measure - 1)) {//mientras i esté en la posicion 0, o y en la posicion 0,
						cout << "*";															  //se escribirá el asterisco 
					}
					else {
						cout << " ";
					}
				}
				cout << endl;	//termina el primer ciclo y salta de linea 
			}
	}


	else {
		if (measure > 1 && measure <= 50)
			posicion->movimientoEjeY();
			for (int i = 0; i < measure; i++) {
				posicion->movimientoEjeX();
				for (int y = 0; y < measure; y++) {
					cout << "*";
				}
				cout << endl;
			}
	}
}
