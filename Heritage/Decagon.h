#pragma once
#include "Polygon.h"

class Decagon : public Polygon {
	private:
		int apotema;
		int site;
	public:
		Decagon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();

};

