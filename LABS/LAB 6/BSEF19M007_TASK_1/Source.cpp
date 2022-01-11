//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Triangles.h"

using namespace std;


int main() {

	IsoscelesTriangle isc; //Creating object isc
	
	int A, B, C, alph, bet, gam; //For taking Input

	cout << " => Give the length of three equal sides of EquilateralTriangle." << endl;
	cout << " => Length a (first): ";
	cin >> A;
	cout << " => Length b (second): ";
	cin >> B;
	cout << " => Length c (third): ";
	cin >> C;

	cout << " => Give the value of three equal angles (That is 60 in degrees) of EquilateralTriangle.  " << endl;
	cout << " => Give Angle Alpha (first): ";
	cin >> alph;
	cout << " => Give Angle Beta (second): ";
	cin >> bet;
	cout << " => Give Angle Gamma (third): ";
	cin >> gam;

	EquilateralTriangle tri(A, B, C, alph, bet, gam);//Creating Object tri
	


	isc = tri; //Converting

	//Displaying 
	cout << endl;
	cout << " => Values of three sides and angles of the Equilateral Triangle are: " << endl;
	tri.Display();
	cout << endl;
	cout << " => Values of three sides and angles of the Isoscles Triangle are: " << endl;
	isc.Display();

	return 0;
}