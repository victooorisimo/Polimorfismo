#pragma once
#include "Polygon.h"

class Triangle : public Polygon {
	private:
		int leng;
		int height;
	public:
		Triangle();
		double getArea();
		double getPerimeter();
		void setLeng(int leng);
		void setHeight(int height);


};

