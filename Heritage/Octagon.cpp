#include "Octagon.h"
Octagon::Octagon() {}

double Octagon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Octagon::getPerimeter() {
	return (this->site * 8);
}

void Octagon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Octagon::getApotema() {
	return this->apotema;
}

void Octagon::setSite(int site) {
	this->site = site;
}

int Octagon::getSite() {
	return this->site;
}