#pragma once
#include "Polygon.h"

class Hexagon : public Polygon{
	private:
		int apotema;
		int site;
	public:
		Hexagon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();
};

