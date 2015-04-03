#include <string>
#include "Rectangle.h"
using namespace std;


#ifndef SQUARE_H
#define SQUARE_H

class Square: public Rectangle{
	
	public:
		
		Square();	
		Square(double side);	
		Square(double side, string squareColor, bool squareFilled);	
		void setSide(double side);	
		double getSide();
		string toString();
		void setLength(double side);
		void setWidth(double side);
};

#endif
