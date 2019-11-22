#include "Decagon.h"
Decagon::Decagon() {}

double Decagon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Decagon::getPerimeter() {
	return (this->site * 10);
}

void Decagon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Decagon::getApotema() {
	return this->apotema;
}

void Decagon::setSite(int site) {
	this->site = site;
}

int Decagon::getSite() {
	return this->site;
}