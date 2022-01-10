//ANNS SHAHBAZ BSEF19M007

#include "Circle.h"
#include<iostream>

using namespace std;

Circle::Circle() {	//default constructor

	x = 0;
	y = 0;
	diameter = 0;
	RedColorVal = 0;
	GreenColorVal = 0;
	BlueColorVal = 0;

}

Circle::Circle(int x , int y, int d, int r, int g, int b) { //Parameterized Constructor

	this->x = x;	//setting x
	this->y = y;	//setting y
	this->diameter = d;	//setting diameter
	this->RedColorVal = r;		//setting RedColorValue
	this->GreenColorVal = g;		//setting GreenColorValue
	this->BlueColorVal = b;	//setting BlueColorValue
}


Circle::Circle(const Circle& c) {	//Deep copy

	x = c.x;
	y = c.y;
	diameter = c.diameter;
	RedColorVal = c.RedColorVal;
	GreenColorVal = c.GreenColorVal;
	BlueColorVal = c.BlueColorVal;
}

Circle Circle::operator + (Circle c) {	//OverLoaded + Operator

	return(Circle(0,0,diameter + c.diameter,255,255,255)); //White Circle 5 at (0,0)
}

void Circle::UP() {	//moving circle 1 point up
	++y;
}

void Circle::DOWN() {	//moving circle 1 point down
	--y;
}

void Circle::LEFT() {	//moving circle 1 point left
	--x;
}

void Circle::RIGHT() { //moving circle 1 point right
	++x;
}


int Circle::getX() { //to get x
	return x;	
}
	
int Circle::getY() {//to get y
	return y;
}

int Circle::getRadius() {	//to get radius
	return diameter / 2; 
}

int Circle::getRed() {	//to get RedColorValue
	return RedColorVal;
}

int Circle::getGreen() {	//to get GreenColorValue
	return GreenColorVal;
}

int Circle::getBlue() {
	return BlueColorVal; //to get BlueColorValue
} 



//Function to check concentric and then labelling
void Circle::Concentric(Circle c1, Circle c2, Circle c3, Circle c4) { //Checking if Circles concentric


	bool con1 = false, con2 = false, con3 = false, con4 = false; // To remember which circles were concentric. Will be used later.

	//determining which of the circles are concentric using if with particular conditions

	if (c1.getX() == c2.getX() && c1.getY() == c2.getY()) {
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getX() << "," << c1.getY() << ") and The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getX() << "," << c2.getY() << ") are concentirc." << endl;
		con1 = true;
		con2 = true;

	}


	if (c1.getX() == c3.getX() && c1.getY() == c3.getY()) {
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getX() << "," << c1.getY() << ") and The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getX() << "," << c3.getY() << ") are concentirc." << endl;

		con1 = true;
		con3 = true;
	}

	if (c1.getX() == c4.getX() && c1.getY() == c4.getY()) {
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getX() << "," << c1.getY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getX() << "," << c4.getY() << ") are concentirc." << endl;

		con1 = true;
		con4 = true;
	}

	if (c2.getX() == c3.getX() && c2.getY() == c3.getY()) {
		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getX() << "," << c2.getY() << ") and The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getX() << "," << c3.getY() << ") are concentirc." << endl;

		con2 = true;
		con3 = true;
	}

	if (c2.getX() == c4.getX() && c2.getY() == c4.getY()) {
		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getX() << "," << c2.getY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getX() << "," << c4.getY() << ") are concentirc." << endl;

		con2 = true;
		con4 = true;
	}

	if (c3.getX() == c4.getX() && c3.getY() == c4.getY()) {
		cout << " => The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getX() << "," << c3.getY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getX() << "," << c4.getY() << ") are concentirc." << endl;

		con3 = true;
		con4 = true;
	}

	cout << endl;


	int ConCount = 0; //to store how many concentric circles are there
	int j = 0; //for iteration
	int min; //to check the label of the circle according to its positions

	//counting number of concentric circles

	if (con1 == true)
		ConCount++;

	if (con2 == true)
		ConCount++;

	if (con3 == true)
		ConCount++;

	if (con4 == true)
		ConCount++;


	double* ConArray; //declaring and defining a dynamic array to do the process easier
	ConArray = new double[ConCount];

	int index1, index2, index3, index4; // to remember the index # , is used in the loop later, to overcome the issue of array values being compared to itself

	//storing Radius Values in ConArray

	if (con1 == true) {
		ConArray[j] = c1.getRadius();
		index1 = j++;
	}

	if (con2 == true) {
		ConArray[j] = c2.getRadius();
		index2 = j++;
	}

	if (con3 == true) {
		ConArray[j] = c3.getRadius();
		index3 = j++;
	}

	if (con4 == true) {
		ConArray[j] = c4.getRadius();
		index4 = j;
	}

	//determining the label number of the circles.

	if (con1 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c1.getRadius() < ConArray[i] && i != index1) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getX() << "," << c1.getY() << ") is laballed as " << min << endl;
	}


	if (con2 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c2.getRadius() < ConArray[i] && i != index2) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getX() << "," << c2.getY() << ") is laballed as " << min << endl;
	}


	if (con3 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c3.getRadius() < ConArray[i] && i != index3) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getX() << "," << c3.getY() << ") is laballed as " << min << endl;
	}


	if (con4 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c4.getRadius() < ConArray[i] && i != index4) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getX() << "," << c4.getY() << ") is laballed as " << min << endl;
	}


}
