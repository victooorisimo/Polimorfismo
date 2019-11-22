#include "Square.h"
//Constructor class
Square::Square() {}

double Square::getArea() {
	return 2 * (this->side);
}

double Square::getPerimeter() {
	return 4 * (this->side);
}

void Square::setSide(int side) {
	this->side = side;
}
