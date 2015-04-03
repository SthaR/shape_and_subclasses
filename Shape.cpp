#include <string>
#include "Shape.h"
using namespace std;

Shape::Shape(){
			color="green";
			filled=true;
		}
		
Shape::Shape(string shapeColor, bool shapeFilled){
			setColor(shapeColor);
			setFilled(shapeFilled);
		}
		
void Shape::setColor(string shapeColor){
			color=shapeColor;
		}
		
string Shape::getColor(){
			return color;
		}
		
void Shape::setFilled(bool shapeFilled){
			filled=shapeFilled;
		}
		
bool Shape::isFilled(){
			return filled;
		}
		
string Shape::toString(){
	string fillVal;
	if (isFilled())
		fillVal= " filled";
	else
		fillVal=" not filled";
		
	return "A Shape with color " + getColor() + " and " + fillVal;
}

