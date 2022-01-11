//ANNS SHAHBAZ BSEF19M007
#include "Triangles.h"
#include<iostream>
using namespace std;

//default constructor for Class Equilateral
EquilateralTriangle::EquilateralTriangle() {

	a = 0;
	b = 0;
	c = 0;
	alpha = 60;
	beta = 60;
	gamma = 60;
}

//parameterized constructor for Class Equilateral
EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int alph, int bet, int gamm) {


		this->a = a;
		this->b = b;
		this->c = c;
		this->alpha = alph;
		this->beta = bet;
		this->gamma = gamm;


}

//TypeCasting
EquilateralTriangle::operator IsoscelesTriangle() {

	int FirstParA = a;	//Copying Length
	int SecondParB = b;
	int ThirdParC = 0;	//one side = 0
	//copying angles
	int FirstAngAlpha = alpha;
	int SecondAngBeta = beta;
	int ThirdAngGamma = 0; //one angle  = 0

	return IsoscelesTriangle(FirstParA, SecondParB, ThirdParC, FirstAngAlpha, SecondAngBeta, ThirdAngGamma);
}

//Displaying 
void EquilateralTriangle::Display() {
	cout << " => Length of side a is: " << this->a << endl;
	cout << " => Length of side b is: " << this->b << endl;
	cout << " => Length of side c is: " << this->c << endl;

	cout << " => First angle is: " << this->alpha << endl;
	cout << " => First angle is: " << this->beta << endl;
	cout << " => First angle is: " << this->gamma << endl;
}

//default constructor for Class Iscoscles

IsoscelesTriangle::IsoscelesTriangle() {

	a = 0;
	b = 0;
	c = 0;
	alpha = 0;
	beta = 0;
	gamma = 0;

}
//parameterized constructor for Class Iscoscles

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int alpha, int beta, int gamma) {

	this->a = a;
	this->b = b;
	this->c = c;
	this->alpha = alpha;
	this->beta = beta;
	this->gamma = gamma;

}

//Displaying function for Class Iscoscl

void IsoscelesTriangle::Display() {

	cout << " => Length of side a is: " << this->a << endl;
	cout << " => Length of side b is: " << this->b << endl;
	cout << " => Length of side c is: " << this->c << endl;

	cout << " => First angle is: " << this->alpha << endl;
	cout << " => First angle is: " << this->beta << endl;
	cout << " => First angle is: " << this->gamma << endl;

}




