//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Rational.h"

using namespace std;

int main() {


	
	Rational number1(40,-8); //Creating First Rational Number 40/-8
	number1.show();		//displaying
	cout << "---------------------------------------------------------------------------------" << endl;

	number1.simplify();	//simplifying
	cout << endl;
	cout << "---------------------------------------------------------------------------------" << endl << endl;

	Rational New1(40,-8), New2(6,7), Resultant(1,1); //Creating three objects, Resultant = New1 (operation) New2

	cout << " => By adding Rational Number 1 (40/-8) with Rational Number 2 (6/7), We get: " << endl;
	Resultant = New1.add(New2); //adding New1 and New2
	Resultant.show();
	cout << endl;
	cout << "---------------------------------------------------------------------------------" << endl << endl;

	cout << " => By subtracting Rational Number 1 (40/-8) with Rational Number 2 (6/7), We get: " << endl;
	Resultant = New1.subtract(New2); //Subtracting New1 and New2
	Resultant.show();
	cout << endl;
	cout << "---------------------------------------------------------------------------------" << endl << endl;

	cout << " => By multiplying Rational Number 1 (40/-8) with Rational Number 2 (6/7), We get: " << endl;
	Resultant = New1.mul(New2); //Multiplying New1 and New2
	Resultant.show();
	cout << "---------------------------------------------------------------------------------" << endl << endl;

	return 0;


}