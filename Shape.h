#include <string>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape{
	
	private:
		string color;
		bool filled;
		
	public:
		
		Shape();		
		Shape(string shapeColor, bool shapeFilled);		
		void setColor(string shapeColor);		
		string getColor();		
		void setFilled(bool shapeFilled);		
		bool isFilled();
		string toString();
};

#endif
