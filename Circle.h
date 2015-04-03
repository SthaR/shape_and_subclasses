#include <string>
#include <cmath>
#include "Shape.h"
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle: public Shape{

	private:
		double radius;
	
	public:
		
		Circle();		
		Circle(double circleRadius);		
		Circle(double circleRadius, string circleColor, bool circleFilled);		
		void setRadius(double circleRadius);		
		double getRadius();		
		double getArea();		
		double getPerimeter();
		string toString();	
		
};

#endif
