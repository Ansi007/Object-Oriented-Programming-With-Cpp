//ANNS SHAHBAZ BSEF19M007
#pragma once

class IsoscelesTriangle;
class EquilateralTriangle { //Declaring class 
	//data members
private:
	int a, b, c; //lengths
	int alpha, beta, gamma; //angles

public:

	EquilateralTriangle(); //default constructor
	EquilateralTriangle(int, int, int, int, int, int);	//Parameterized Constructor
	operator IsoscelesTriangle(); //TypeCasting 
	void Display(); //Display Function

};


class IsoscelesTriangle {
	//data members
private:
	int a, b, c;
	int alpha, beta, gamma;

public:
	IsoscelesTriangle();//default constructor
	IsoscelesTriangle(int, int, int, int, int, int);//Parameterized Constructor
	void Display(); //Display Function
};

