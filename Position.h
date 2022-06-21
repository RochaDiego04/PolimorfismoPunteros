#pragma once
#include <iostream>
#include <conio.h>

using namespace std;

class Position {
public:
	int x, y;
	int i;
	char option;
	bool return_;
	Position();
	void setOption();
	bool evaluateOption();
	void movimientoEjeX();
	void movimientoEjeY();
};