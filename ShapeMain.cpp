#include <iostream>
#include <cctype>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

void getShapeDetails(string &shapeColor, bool &shapeFill);
void getCircleDetails(double &radius);
void getRectangleDetails(double &length, double &width);
void getSquareDetail(double &side);

int main(){
	
	//Variables used in the program
	string shapeColor;
	bool shapeFill;
	double radius, length, width, side;
	int shapeVal;
	char waitVal;
	char userChoice='Y';
	
	//Looping  while the user wants
	while(toupper(userChoice)=='Y'){
		
		system("cls"); //clearing the screen
		
		cout << "Checking if the constructor with no arguments work:\n\t";
		Shape shp1;
		cout << shp1.toString();
		cout << "\nIt works!\n";
		
		getShapeDetails(shapeColor, shapeFill);
		
		cout << "Checking if the constructor with arguments work:\n\t";
		Shape shp2(shapeColor, shapeFill);
		cout << shp2.toString();
		cout << "\nIt worked too!\n";
		
		cout << "\n\nChoose a shape: \n\n1. Circle\n2. Rectangle\n3. Square\n\n Choose a shape (1/2/3): ";
		cin >> shapeVal;
	
		system("cls");
		
		if (shapeVal==1){ //When Circle is chosen
			
				cout << "With default constructor: \n";
				Circle circ1;
				cout << "\n\n" << circ1.toString() << "\nArea: " << circ1.getArea() << " and perimeter: " << circ1.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith a single argument 'radius' : \n";
				getCircleDetails(radius);
				Circle circ2(radius);
				cout << "\n" << circ2.toString() << "\nArea: " << circ2.getArea() << " and perimeter: " << circ2.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith three arguments 'radius', 'shapeColor' and 'shapeFill':\n";
				Circle circ3(radius, shapeColor, shapeFill);
				cout << circ3.toString() << "\nArea: " << circ3.getArea() << " and perimeter: " << circ3.getPerimeter();
				
		}
				
		else if (shapeVal==2){ //When Rectangle is chosen
				
				cout << "With default constructor: \n";
				Rectangle rec1;
				cout << "\n\n" << rec1.toString() << "\nArea: " << rec1.getArea() << " and perimeter: " << rec1.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith arguments 'length' and 'breadth': \n";
				getRectangleDetails(length, width);
				Rectangle rec2(length, width);
				cout << "\n" << rec2.toString() << "\nArea: " << rec2.getArea() << " and perimeter: " << rec2.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith four arguments 'length', 'breadth', 'shapeColor' and 'shapeFill':\n";
				Rectangle rec3(length, width, shapeColor, shapeFill);
				cout << rec3.toString() << "\nArea: " << rec3.getArea() << " and perimeter: " << rec3.getPerimeter();
			
		}
		
		else if (shapeVal==3){ //When Square is chosen
			
				cout << "With default constructor: \n";
				Square sq1;
				cout << "\n\n" << sq1.toString() << "\nArea: " << sq1.getArea() << " and perimeter: " << sq1.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith arguments 'side': \n";
				getSquareDetail(side);
				Square sq2(side);
				cout << "\n" << sq2.toString() << "\nArea: " << sq2.getArea() << " and perimeter: " << sq2.getPerimeter();
				cout << "\n----------------------------------------\n";
				
				cout << "\n\nWith three arguments 'side', 'shapeColor' and 'shapeFill':\n";
				Square sq3(side, shapeColor, shapeFill);
				cout << sq3.toString() << "\nArea: " << sq3.getArea() << " and perimeter: " << sq3.getPerimeter();
		}
		
		else{ //In cases other than 1,2 and 3
			cout << "Invalid Value!";
		}
		
		cout << "\n----------------------------------------\n";
		cout << "\n\nDo you want to continue? (Y/N): "; //Asking 
		cin >> userChoice;
		
	}
	
	
}
	
	
void getShapeDetails(string &shapeColor, bool &shapeFill){
	
	cout << "\n\nEnter color of shape: ";
	cin >> shapeColor;
	
	cout << "Is the shape filled? (1 for true/0 for false): ";
	cin >> shapeFill;
		
}

void getCircleDetails(double &radius){
	cout << "Enter radius of circle: ";
	cin >> radius;
}

void getRectangleDetails(double &length, double &width){
	cout << "Enter length: ";
	cin >> length;
	
	cout << "Enter breadth: ";
	cin >> width;
}

void getSquareDetail(double &side){
	
	cout << "Enter side: ";
	cin >> side;	
}
