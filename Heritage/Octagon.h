#pragma once
#include "Polygon.h"

class Octagon : public Polygon{
	private:
		int apotema;
		int site;
	public:
		Octagon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();
};

