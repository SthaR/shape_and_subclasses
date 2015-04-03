#include <string>
#include <sstream>
#include "Square.h"

using namespace std;

Square::Square():Rectangle(){
	}
	
Square::Square(double side): Rectangle(side, side){
	}
	
Square::Square(double side, string squareColor, bool squareFilled):Rectangle(side, side, squareColor, squareFilled){
	}
	
void Square::setSide(double side){
		Rectangle::setLength(side);
	}
	
double Square::getSide(){
		return Rectangle::getLength();
	}
	
void Square::setLength(double side){
		setSide(side);
}

void Square::setWidth(double side){
		setSide(side);
}

string Square::toString(){
	
	stringstream side, area, perimeter;
	side << getSide();
	area << getArea();
	perimeter << getPerimeter();
	
	return "A Square of side: " + side.str()+ " which is a subclass of " + Rectangle::toString();
}
