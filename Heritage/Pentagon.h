#pragma once
#include "Polygon.h"

class Pentagon : public Polygon {
	private:	
		int apotema;
		int site;
	public:
		Pentagon();
		double getArea();
		double getPerimeter();
		void setApotema(int apotema);
		int getApotema();
		void setSite(int site);
		int getSite();
};

