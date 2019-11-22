#include "Heptagon.h"

Heptagon::Heptagon() {}

double Heptagon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Heptagon::getPerimeter() {
	return (this->site * 7);
}

void Heptagon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Heptagon::getApotema() {
	return this->apotema;
}

void Heptagon::setSite(int site) {
	this->site = site;
}

int Heptagon::getSite() {
	return this->site;
}