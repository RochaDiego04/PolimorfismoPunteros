#include "Position.h"

Position::Position() {
	x = 0;
	y = 0;
	i = 0;
	option = ' ';
	return_ = true;
}

void Position::movimientoEjeX() {
	for (i = 0; i < x; i++) { 
		cout << " ";
	}
	i = 0;
}

void Position::movimientoEjeY() {
	for (i = 0; i < y; i++) {
		cout << "\n";
	}
	i = 0;
}

void Position::setOption() {
	option = _getch();
}

bool Position::evaluateOption() {
	switch (option) {
	
	case 'a': 
		x--; 
		if (x < 0) { //si x es menor que 0, aumenta 1 para que x no disminuya mucho
			x++;
		}
		break;
	case 'd':
		x++;
		break;
	case 'w':
		y--;
		if (y < 0) { //si x es menor que 0, aumenta 1 para que x no disminuya mucho
			y++;
		}
		break;
	case 's':
		y++;
		break;
	case 'b': 
		return_ = false;
		break;
	}
	return return_;
}