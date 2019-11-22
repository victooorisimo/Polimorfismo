#pragma once
#include "Polygon.h"

class Heptagon : public Polygon {
	private:
		int apotema;
		int site;
	public:
		Heptagon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();

};

