#pragma once
#include "Polygon.h"
class Square : public Polygon{
	private:
		int side;
	public:
		Square();
		double getArea();
		double getPerimeter();
		void setSide(int side);
};

