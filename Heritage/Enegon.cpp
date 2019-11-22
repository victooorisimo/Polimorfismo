#include "Enegon.h"
Enegon::Enegon() {}

double Enegon::getArea() {
	return (getPerimeter() * this->apotema) / 2;
}

double Enegon::getPerimeter() {
	return (this->site * 9);
}

void Enegon::setApotema(int apotema) {
	this->apotema = apotema;
}

int Enegon::getApotema() {
	return this->apotema;
}

void Enegon::setSite(int site) {
	this->site = site;
}

int Enegon::getSite() {
	return this->site;
}