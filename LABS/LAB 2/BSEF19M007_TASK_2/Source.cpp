#include<iostream>
using namespace std;

class Circle { //declaring class

private: //data members
	double radius, originx, originy;
public:
	Circle() { //default constructor

		radius = 0;
		originx = 0;
		originy = 0;

	}

	Circle(double r, double x, double y) { //parameterized constructor

		radius = r;
		originx = x;
		originy = y;

	}

	//declaring member functions

	void SetRadius(double); //to set the radius
	double getRadius();		//to get radius
	double getOriginX();	//to get x-coordinate
	double getOriginY();	//to get y- coordinate
	double findArea(); 	//to find Area of the circle
	double findCircumference(); //to find Circumference of the circle
	double findDiameter(); //to find Diameter of the circle
};

//defining member functions

void Circle::SetRadius(double r) {

	radius = r;
}

double Circle::getRadius() {

	return radius;
}


double Circle::getOriginX() {

	return originx;
}


double Circle::getOriginY() {

	return originy;
}


double Circle::findArea() {
	return  (3.14159) * radius * radius;
}

double Circle::findCircumference() {
	return  2 * (3.14159) * radius;
}

double Circle::findDiameter() {
	return   radius * 2;
}

int main() {


	cout << " => **************************** PART A ****************************" << endl << endl;
	Circle Sample1; //Creating Circle Sample object
	int radius;
	cout << " => Give the radius of the circle : ";
	cin >> radius;
	Sample1.SetRadius(radius); //setting radius

	cout << " => The Area of our Sample Circle is : " << Sample1.findArea() << endl;
	cout << " => The Circumfernece of our Sample Circle is : " << Sample1.findCircumference() << endl;
	cout << " => The Diamter of our Sample Circle is : " << Sample1.findDiameter() << endl << endl;

	cout << " => **************************** PART B ****************************" << endl << endl;

	Circle c1(1, 0, 3), c2(4, 1, 3), c3(9, 2, 3), c4(16, 1, 3); //Creating four circle objects using parameterized constructor
	bool c12 = false, c13 = false, c14 = false, c23 = false, c24 = false, c34 = false; // To remember which circles were concentric. Will be used later in Part "D". 
	bool con1 = false, con2 = false, con3 = false, con4 = false; // To remember which circles were concentric. Will be used later in Part "C".

	//determining which of the circles are concentric using if with particular conditions

	if (c1.getOriginX() == c2.getOriginX() && c1.getOriginY() == c2.getOriginY()) {
		c12 = true;
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getOriginX() << "," << c1.getOriginY() << ") and The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getOriginX() << "," << c2.getOriginY() << ") are concentirc." << endl;
		con1 = true;
		con2 = true;

	}


	if (c1.getOriginX() == c3.getOriginX() && c1.getOriginY() == c3.getOriginY()) {
		c13 = true;
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getOriginX() << "," << c1.getOriginY() << ") and The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getOriginX() << "," << c3.getOriginY() << ") are concentirc." << endl;

		con1 = true;
		con3 = true;
	}

	if (c1.getOriginX() == c4.getOriginX() && c1.getOriginY() == c4.getOriginY()) {
		c14 = true;
		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getOriginX() << "," << c1.getOriginY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getOriginX() << "," << c4.getOriginY() << ") are concentirc." << endl;

		con1 = true;
		con4 = true;
	}

	if (c2.getOriginX() == c3.getOriginX() && c2.getOriginY() == c3.getOriginY()) {
		c23 = true;
		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getOriginX() << "," << c2.getOriginY() << ") and The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getOriginX() << "," << c3.getOriginY() << ") are concentirc." << endl;

		con2 = true;
		con3 = true;
	}

	if (c2.getOriginX() == c4.getOriginX() && c2.getOriginY() == c4.getOriginY()) {
		c24 = true;
		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getOriginX() << "," << c2.getOriginY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getOriginX() << "," << c4.getOriginY() << ") are concentirc." << endl;

		con2 = true;
		con4 = true;
	}

	if (c3.getOriginX() == c4.getOriginX() && c3.getOriginY() == c4.getOriginY()) {
		c34 = true;
		cout << " => The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getOriginX() << "," << c3.getOriginY() << ") and The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getOriginX() << "," << c4.getOriginY() << ") are concentirc." << endl;

		con3 = true;
		con4 = true;
	}

	cout << endl;

	cout << " => **************************** PART C ****************************" << endl << endl;

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
	int l1, l2, l3, l4; // to store the labels, will be used later in next part.

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

		cout << " => The circle with Radius " << c1.getRadius() << " and Center at (" << c1.getOriginX() << "," << c1.getOriginY() << ") is laballed as " << min << endl;
		l1 = min; // to be used later
	}


	if (con2 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c2.getRadius() < ConArray[i] && i != index2) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c2.getRadius() << " and Center at (" << c2.getOriginX() << "," << c2.getOriginY() << ") is laballed as " << min << endl;
		l2 = min;
	}


	if (con3 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c3.getRadius() < ConArray[i] && i != index3) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c3.getRadius() << " and Center at (" << c3.getOriginX() << "," << c3.getOriginY() << ") is laballed as " << min << endl;
		l3 = min;
	}


	if (con4 == true) {

		min = ConCount;

		for (int i = 0; i < ConCount; i++) {

			if (c4.getRadius() < ConArray[i] && i != index4) {
				min--;
			}

		}

		cout << " => The circle with Radius " << c4.getRadius() << " and Center at (" << c4.getOriginX() << "," << c4.getOriginY() << ") is laballed as " << min << endl;
		l4 = min;
	}


	cout << endl;

	cout << " => **************************** PART D ****************************" << endl << endl;

	//determining which of the concentric circle have diameter greater than 12 using particular if conditions

	if (c12 == true) {

		if (c1.getRadius() * 2 > 12)
			cout << " => Circle labelled as " << l1 << " has the diameter greater than 12. " << endl;

		if (c2.getRadius() * 2 > 12)
			cout << " => Circle labelled as " << l2 << " has the diameter greater than 12. " << endl;

	}


	if (c13 == true) {

		if (c1.getRadius() * 2 > 12 && c12 == false)
			cout << " => Circle labelled as " << l1 << "  has the diameter greater than 12. " << endl;

		if (c3.getRadius() * 2 > 12)
			cout << " => Circle labelled as " << l3 << " has the diameter greater than 12. " << endl;

	}

	if (c14 == true) {

		if (c1.getRadius() * 2 > 12 && c12 == false && c13 == false)
			cout << " => Circle labelled as " << l1 << "  has the diameter greater than 12. " << endl;

		if (c4.getRadius() * 2 > 12)
			cout << " => Circle labelled as " << l4 << " has the diameter greater than 12. " << endl;

	}

	if (c23 == true)
	{
		if (c2.getRadius() * 2 > 12 && c12 == false)
			cout << " => Circle labelled as " << l2 << " has the diameter greater than 12. " << endl;

		if (c3.getRadius() * 2 > 12 && c13 == false)
			cout << " => Circle labelled as " << l3 << " has the diameter greater than 12. " << endl;

	}

	if (c24 == true) {


		if (c2.getRadius() * 2 > 12 && c12 == false && c23 == false)
			cout << " => Circle labelled as " << l2 << " has the diameter greater than 12. " << endl;

		if (c4.getRadius() * 2 > 12 && c14 == false)
			cout << " => Circle labelled as " << l4 << " has the diameter greater than 12. " << endl;

	}

	if (c34 == true) {

		if (c3.getRadius() * 2 > 12 && c13 == false && c23 == false)
			cout << " => Circle labelled as " << l3 << " has the diameter greater than 12. " << endl;

		if (c4.getRadius() * 2 > 12 && c14 == false && c24 == false)
			cout << " => Circle labelled as " << l4 << " has the diameter greater than 12. " << endl;

	}


	//program end!

	return 0;
}
