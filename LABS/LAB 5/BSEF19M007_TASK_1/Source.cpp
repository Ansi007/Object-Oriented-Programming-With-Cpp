//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Polynomial.h"

using namespace std;

int main() {

	
	int degree1 = 0 ,degree2 = 0;	//to take polynomimals degree input
	cout << " => Give the degree of first polynomial: ";
	cin >> degree1; // must be Greater or equal tp zero
	Polynomial p1(degree1);	//creating polynomial 1

	int c = 0, index = 0;	//coefficient and Index

	for (int i = 0; i <= degree1; i++) {	//getting input and setting

		
		cout << " => Give the value at index " << index << " (x^" << index <<"): ";
		cin >> c;
		p1.set(c,index,degree1);	//setting value
		index++;

	}

	cout << " => Give the degree of second polynomial: ";  //creating second polynomial
	cin >> degree2;
	Polynomial p2(degree2);

	index = 0;
	for (int i = 0; i <= degree2; i++) {

		
		cout << " => Give the value at index " << index << " (x^" << index << "): ";
		cin >> c;
		p2.set(c, index, degree2);
		index++;
	}

	Polynomial p3 = p1; //deep copying 

	//Creating polynomial p4, depending on the biggest polynomial
	int degree; 
	if (degree1 > degree2) {
		degree = degree1;
	}
	else {
		degree = degree2;
	}


	Polynomial p4(degree); 

	cout << " => P1 + P2 is: ";
	p4 = p1 + p2;	//Adding P1 and P2
	p4.display();	//display resultant

	cout << " => P4 -= P1 is: ";
	p4 -= p1;	// p4 = p4 - p1;
	p4.display();		//display resultant
			

	if (p1 > p2) {	//Checking if p1 > p2 or not
	
		cout << " => P1 is greater than p2" << endl;
	}
	
	else 
		cout << " => P1 is not greater than p2" << endl;


	if (p1 == p2) { //Checking if p1 == p2 or not

		cout << " => P1 is equal to p2" << endl;
	}

	else
		cout << " => P1 is not equal to p2" << endl;
	

	if (p1 != p2) { //Checking if p1 != p2

		cout << " => P1 is not equal to p2" << endl;
	}

	else
		cout << " => P1 is equal to p2" << endl;

	p1.SetTempCheck(); //To Allow destructor

	return 0;
}