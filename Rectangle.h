#include <string>
#include "Shape.h"
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape{
	
	private:
		double width;
		double length;
		
	public:
		
		Rectangle();		
		Rectangle(double rectangleWidth, double rectangleLength);
		Rectangle(double rectangleWidth, double rectangleLength, string rectangleColor, bool rectangleFilled);
		void setWidth(double rectangleWidth);
		double getWidth();
		void setLength(double rectangleLength);
		double getLength();
		double getArea();		
		double getPerimeter();
		string toString();
		
};

#endif
