//ANNS SHAHBAZ BSEF19M007
#pragma once
class Circle {

private:	//data members
	int x, y;	//x coordinate, y coordinate
	int diameter;	//diameter	
	int RedColorVal;	//RedColor
	int GreenColorVal;	//GreenColor
	int BlueColorVal;	//BlueColor
public:
	Circle();	//Constructor
	Circle(const Circle& c);	//Deep Copy	
	Circle(int , int , int , int , int , int ); // Parameterized Constructor
	Circle operator + (Circle c);	//Overloaded + Operator
	void UP();	//Move Circle 1 point UP
	void DOWN();//Move Circle 1 point DOWN
	void LEFT();//Move Circle 1 point LEFT
	void RIGHT();//Move Circle 1 point RIGHT

	//Access class data members
	int getX();
	int getY();
	int getRadius();
	int getRed();
	int getGreen();
	int getBlue();


	void Concentric(Circle , Circle , Circle, Circle); //Find Concentric circles and label them

};

