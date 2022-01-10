//ANNS SHAHBAZ BSEF19M007
#include "Polynomial.h"
#include <iostream>
using namespace std;


bool Polynomial::Destructor_Allowed = false; //static Initialization

Polynomial::Polynomial(int n) { //Constructor

	degree = n; //saving highest degree value
	n++; //to make array equivalent to the degree value
	coef = new int[n]; //creating dyanamic memory

	for (int i = 0; i < n; i++)
		coef[i] = 0;		//initializing to zero
}

Polynomial::Polynomial(const Polynomial& P) { //deep copy

	int n;
	degree = P.degree; //copying 
	n = degree;
	n++;

	coef = new int[n];

	for (int i = 0; i < n; i++)
		coef[i] = P.coef[i]; //copying
}

Polynomial::~Polynomial() { //destructor

	if(Destructor_Allowed != false) // So that temporary memories dont get deleted even before returning 
	delete[] coef;	//deleting allocated memor
	coef = nullptr;
}

void Polynomial::SetTempCheck() {	//To allow Destructor
	Destructor_Allowed = true;
}

void Polynomial::set(int c, int index, int degree) { //set functions


	coef[index] = c; //Setting index input
	this->degree = degree; //degree fixed
}

void Polynomial::display() {

	for (int i = degree; i >= 0; i--) { //highest to lowest degree

		cout << "("<< coef[i] << "x^" << i; //displaying
		if (i != 0)
			cout << ") + ";

	}
	cout << ")";
	cout << endl;
}

//In all comments 'p' represents the caller object

Polynomial Polynomial::operator + (Polynomial p2) { //Overloaded + Operator

	if (this->degree > p2.degree) { //p > p2

		Polynomial Adder(degree);	//creating temporary object
		for (int i = 0; i <= degree; i++) { 

			if (i <= p2.degree)	//adding p and p2
				Adder.coef[i] = coef[i] + p2.coef[i];
			else
				Adder.coef[i] = coef[i];	//As p > p2 rest of the values are stored by this line
		}

		return Adder; //returning objecet

	}

	else { //p2  > p

		Polynomial Adder(p2.degree); 	//creating temporary object

		for (int i = 0; i <= p2.degree; i++) {

			if (i <= degree) 
				Adder.coef[i] = coef[i] + p2.coef[i];	//adding p and p2
			else
				Adder.coef[i] = p2.coef[i] + 0; //as p2 > p rest of the values are stored by this line
		}
		
		return Adder;	//returning object

	}

}


Polynomial Polynomial::operator += (Polynomial p2) { //Overloaded += Operator

	if (this->degree > p2.degree) { //p > p2

		for (int i = 0; i <= degree; i++) {

			if (i <= p2.degree)	
				coef[i] += p2.coef[i]; //adding
			else
				coef[i] + 0;	//just to show what is happening
		}

		return *this;	

	}

	else { //p2  > p


		for (int i = 0; i <= p2.degree; i++) {

			if (i <= degree)
				coef[i] += p2.coef[i];	//adding
			else
				coef[i] = p2.coef[i] + 0;	//As p2 > p rest of the values are stored by this line
		}

		degree = p2.degree;	//changing highest degree


		return *this;

	}

}

Polynomial Polynomial::operator - (Polynomial p2)  { //Overloaded - Operator

	if (this->degree > p2.degree) { //p > p2

		Polynomial Adder(degree);	
		for (int i = 0; i <= degree; i++) {

			if (i <= p2.degree)
				Adder.coef[i] = coef[i] - p2.coef[i];	//subtracting
			else
				Adder.coef[i] = coef[i] - 0; //As p > p2 rest of the values are stored by this line
		}

		return Adder;

	}

	else { //p2  > p

		Polynomial Adder(p2.degree);

		for (int i = 0; i <= p2.degree; i++) {

			if (i <= degree)
				Adder.coef[i] = coef[i] - p2.coef[i];	//subtracting
			else
				Adder.coef[i] = - p2.coef[i] - 0; //As p2 > p rest of the values are stored by this line
		}

		return Adder;

	}

}

Polynomial Polynomial::operator -= (Polynomial p2) { //Overloaded -= Operator

	if (this->degree > p2.degree) { //p > p2

		for (int i = 0; i <= degree; i++) {

			if (i <= p2.degree)
				coef[i] -= p2.coef[i]; // subtracting
			else
				coef[i] - 0;
		}

		return *this;

	}

	else { //p2  > p


		for (int i = 0; i <= p2.degree; i++) {

			if (i <= degree)
				coef[i] -= p2.coef[i];	//subtracting
			else
				coef[i] = p2.coef[i] - 0;
		}

		degree = p2.degree;	//changing highest degree


		return *this;

	}

}

bool Polynomial::operator > (Polynomial p2) { //Overloaded > Operator

	bool check = true;	//to check either true or false

	if (this->degree > p2.degree)	//p > p2
		return true;	

	else if (this->degree < p2.degree)	//p  < p2
		return false;

	else if (this->degree == p2.degree) { //degree same

		for (int i = degree; i >= 0; i--) {	//checking constants/coefficients

			if (coef[i] < p2.coef[i]) {		// p < p2
				check = false;
				break;
			}

			if (coef[i] == p2.coef[i]) {	// p == p2
				check = false;

			}

			if (coef[i] > p2.coef[i]) {		// p > p2
				check = true;
				break;
			}
		}
		return check; //returning bool
	}

}

bool Polynomial::operator < (Polynomial p2) { //Overloaded < Operator

	bool check = true; 

	if (this->degree < p2.degree) // p < p2
		return true;

	else if (this->degree > p2.degree)	// p > p2
		return false;

	else if (this->degree == p2.degree) { //degrees same

		for (int i = degree; i >= 0; i--) {	//checking cofficents/constants

			if (coef[i] > p2.coef[i]) {	//p > p2
				check = false;
				break;
			}

			if (coef[i] == p2.coef[i]) { //p == p2
				check = false;

			}

			if (coef[i] < p2.coef[i]) { //p < p2
				check = true;
				break;
			}
		}
		return check;
	


	}

}

bool Polynomial::operator == (Polynomial p2) { //Overloaded == Operator

	bool check = true;

	if (this->degree == p2.degree) { // p == p2

		for (int i = 0; i <= degree; i++) {	//checking coefficents/constants

			if (coef[i] != p2.coef[i])
				check = false;
		}

		return check;
	}
	else
		return false;
}

bool Polynomial::operator >= (Polynomial p2) { //Overloaded >= Operator

	bool check = true;

	if (this->degree < p2.degree) // p1 < p2
		return false;

	else if(this->degree > p2.degree)	//p1 > p2
		return true;

	else if (this->degree == p2.degree) { // degree same

		for (int i = degree; i >= 0; i--) {	//checking coefficients/constants

			if (coef[i] == p2.coef[i]) //equal
				check = true;

			else {

				if (coef[i] > p2.coef[i]) // p1 > p2
					check = true;

				if (coef[i] < p2.coef[i])  // p1 < p2
					check = false;
			
				break;
			}
		}

		return check;
	}
	
}

bool Polynomial::operator <= (Polynomial p2) { // Overloaded <= Operator

	bool check = true;

	if (this->degree > p2.degree)	//p1 > p2
		return false;

	else if(this->degree < p2.degree)	// p1 < p2
		return true;		

	else if (this->degree == p2.degree) {	//degree same

		for (int i = degree; i >= 0; i--) {	//checking coefficients/constants
				
			if (coef[i] == p2.coef[i])	// p1 == p2
				check = true;

			else {

				if (coef[i] < p2.coef[i])	//p1 < p2
					check = true;

				if (coef[i] > p2.coef[i])	//p1 > p2
					check = false;

				break;
			}

		}

		return check;
	}
	
}


bool Polynomial::operator != (Polynomial p2) { //Overloaded != Operator
	 
	bool check = true;

	if (this->degree != p2.degree)	// p1 != p2
		return true;

	else if(this->degree == p2.degree) { //degree same
	
		for (int i = degree; i >= 0; i--) {	//checking coefficents

			if (coef[i] != p2.coef[i]) {	//p1 != p2
				check = true;
				break;
			}

			else {	// p1 == p2
				check = false;

			}


		}

		return check;
	}


}
