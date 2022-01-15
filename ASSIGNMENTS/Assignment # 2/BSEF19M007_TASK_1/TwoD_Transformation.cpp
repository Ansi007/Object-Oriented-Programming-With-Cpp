//ANNS SHAHBAZ BSEF19M007
#include "TwoD_Transformation.h"
#include<iostream>

using namespace std;

Point::Point() {	//default

	point = new double[2];
	for (int i = 0; i < 2; i++)
		point[i] = 0;

}

Point::Point(double x, double y) {	//paramaterized

	
	point = new double[2];
		point[0] = x;
		point[1] = y;


}


Point::~Point() {	//destructor

	delete[] point;
	point = nullptr;
}

double Point::GetX() {

	return point[0]; 

}

double Point::GetY() {

	return point[1];	

}

void Point::SetX(double x) {
	this->point[0] = x;
}

void Point::SetY(double y) {
	this->point[1] = y;
}

void Point::Display() {

	cout << " => X Coordinate is: " << GetX();
	cout << " => Y Coordinate is: " << GetY();

}

TransformationMatrix::TransformationMatrix() { //default constructor

	Scaling = new double* [2];
	for (int i = 0; i < 2; i++)
		Scaling[i] = new double[2];

	Rotation = new double* [2];
	for (int i = 0; i < 2; i++)
		Rotation[i] = new double[2];

	Shear = new double* [2];
	for (int i = 0; i < 2; i++)
		Shear[i] = new double[2];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			Scaling[i][j] = 0;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			Rotation[i][j] = 0;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			Shear[i][j] = 1;

}

TransformationMatrix::~TransformationMatrix() {		//default destructor

	for (int i = 0; i < 2; i++) {
		delete[] Scaling[i];
	}

	delete[]Scaling;

	for (int i = 0; i < 2; i++) {
		delete[] Rotation[i];
	}

	delete[]Rotation;

	for (int i = 0; i < 2; i++) {
		delete[] Shear[i];
	}

	delete[]Shear;

}

void TransformationMatrix::Transformation(Point *P,char flag) {		//Transformation Function

	double Sx = 0, Sy = 0 ;		//Scaling/Shearing Factor
	double angle = 0;		//Rotating Angle
	double X = 0, Y = 0;	//New X and Y

	if (flag == 'A' || flag == 'a') {	//sacling
	
		cout << " => Give the scaling factor Sx: ";
		cin >> Sx;

		cout << " => Give the scaling factor Sy: ";
		cin >> Sy;

		Scaling[0][0] = Sx;	//Setting SCaling Factor Sx
		Scaling[1][1] = Sy;	//Setting SCaling Factor Sy


		X = P->GetX() * Scaling[0][0] + P->GetY() * Scaling[0][1];	//Performing Scaling
		Y = P->GetX() * Scaling[1][0] + P->GetY() * Scaling[1][1];

		P->SetX(X);
		P->SetY(Y);

	}


	if (flag == 'B' || flag == 'b') {	//rotating
	
		cout << " => For your information." << endl;
		cout << " => Degrees\tRadians\t\tRadians" << endl;
		cout << " =>\t\t(exact)\t\t(approx)" << endl;
		cout << " => 30\t\tpi / 6\t\t0.524" << endl;
		cout << " => 45\t\tpi / 4\t\t0.785" << endl;
		cout << " => 60\t\tpi / 3\t\t1.047" << endl;
		cout << " => 90\t\tpi / 2\t\t1.571" << endl;
		cout << " => 180\t\tpi\t\t3.142" << endl;
		cout << " => 270\t\t3pi / 2\t\t4.712" << endl;
		cout << " => 360\t\t2pi\t\t6.283" << endl;
		cout << " => Give the Rotating angle Theeta (in radian): ";
		cin >> angle;
		
		//Setting Rotation
		Rotation[0][0] = cos(angle);	
		Rotation[0][1] = -sin(angle);
		Rotation[1][0] = sin(angle);
		Rotation[1][1] = cos(angle);
		
		//Performing Rotation
		X = (P->GetX() * Rotation[0][0] + P->GetY() * Rotation[0][1]);
		Y = (P->GetX() * Rotation[1][0] + P->GetY() * Rotation[1][1]);

		P->SetX(X);
		P->SetY(Y);

	}


	if (flag == 'C' || flag == 'c') {	//shearing
	

		cout << " => Give the shearing factor Shx: ";
		cin >> Sx;

		cout << " => Give the shearing factor Shy: ";
		cin >> Sy;

		//Setting Shearing Factors 
		Shear[0][1] = Sx;
		Shear[1][0] = Sy;

		//Performing Shear
		X = P->GetX() * Shear[0][0] + P->GetY() * Shear[0][1];
		Y = P->GetX() * Shear[1][0] + P->GetY() * Shear[1][1];

		P->SetX(X);
		P->SetY(Y);

	}

}

