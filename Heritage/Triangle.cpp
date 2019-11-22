#include "Triangle.h"

Triangle::Triangle(){}

double Triangle::getArea() {
	return (this->leng * this->height) / 2;
}

double Triangle::getPerimeter() {
	return 3 * (this->leng);
}

void Triangle::setLeng(int leng) {
	this->leng = leng;
}

void Triangle::setHeight(int height) {
	this->height = height;
}