#include "Hexagon.h"
Hexagon::Hexagon() {}

double Hexagon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Hexagon::getPerimeter() {
	return (this->site * 6);
}

void Hexagon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Hexagon::getApotema() {
	return this->apotema;
}

void Hexagon::setSite(int site) {
	this->site = site;
}

int Hexagon::getSite() {
	return this->site;
}