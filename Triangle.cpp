#include "Triangle.h"
using namespace std;
Triangle::Triangle() {

}


void Triangle::draw(int measure, int secondaryOption, Position* posicion) {
	if (secondaryOption == 1) {
		if (measure <= 50 && measure >= 2) {
			posicion->movimientoEjeY();
			for (int i = 0; i < measure; i++) { //este ciclo designa la altura
				posicion->movimientoEjeX();
				for (int y = 0; y < measure - i; y++) { //imprime la altura en espacios en blanco y va decreciendo 1 cada que cambia de linea
					cout << " ";
				}
				cout << "*"; //Imprime un asterisco despues los espacios en blanco
				for (int y = 1; y < 2 * i; y++) { //imprime los espacios en blanco del relleno
					if (i != measure - 1) { //pero solo si no es la última linea
						cout << " ";
					}
				}
				if (i != 0) {	//imprime asteriscos al final, despues del relleno hueco, menos en la primera posicion.
					if (i == measure - 1) {	//si i está en la última linea
						for (int j = 1; j < 2 * i + 1; j++) //imprime todos los asteriscos de la base, +1 del vertice inferior derecho
							cout << "*";
					}
					else cout << "*"; //si no es la última linea, solo escribe un asterisco

				}
				cout << endl; //terminan los ciclos y da un salto de linea
			}
			cout << endl;
		}
	}

	else {
		if (measure <= 50 && measure >= 2) {
			posicion->movimientoEjeY(); 
			for (int i = 1; i <= measure; i++) { //este ciclo designa la altura
				posicion->movimientoEjeX();
				for (int y = 1; y <= measure - i; y++) { //imprime la altura -1, en espacios en blanco
					cout << " ";
				}
				for (int y = 1; y <= 2 * i - 1; y++) { //imprime el asterisco luego de los espacios que van decreciendo de arriba
					cout << "*";
				}
				cout << endl; //terminan estos 2 ciclos y da un salto de linea
			}
			cout << endl;
		}
	}
}