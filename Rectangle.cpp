#include <string>
#include <sstream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
			width=1.0;
			length=1.0;
		}
		
Rectangle::Rectangle(double rectangleWidth, double rectangleLength){
			width=rectangleWidth;
			length=rectangleLength;
		}
		
Rectangle::Rectangle(double rectangleWidth, double rectangleLength, string rectangleColor, bool rectangleFilled): Shape(rectangleColor, rectangleFilled){
			width=rectangleWidth;
			length=rectangleLength;
		}
		
void Rectangle::setWidth(double rectangleWidth){
			width=rectangleWidth;
		}
		
double Rectangle::getWidth(){
			return width;
		}
		
void Rectangle::setLength(double rectangleLength){
			length=rectangleLength;
		}
		
double Rectangle::getLength(){
			return length;
		}
	
double Rectangle::getArea(){
			return getLength()*getWidth();
		}
		
double Rectangle::getPerimeter(){
			return 2*(getLength()+getWidth());
		}
		
string Rectangle::toString(){
	stringstream length, width;
	length << getLength();
	width << getWidth();
	return "A Rectangle with width: " + width.str() + " and length: " + length.str() + " which is a subclass of " + Shape::toString();
	
}
		

