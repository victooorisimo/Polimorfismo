#include "Pentagon.h"
Pentagon::Pentagon() {}

double Pentagon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Pentagon::getPerimeter() {
	return (this->site * 5);
}

void Pentagon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Pentagon::getApotema() {
	return this->apotema;
}

void Pentagon::setSite(int site) {
	this->site = site;
}

int Pentagon::getSite() {
	return this->site;
}
