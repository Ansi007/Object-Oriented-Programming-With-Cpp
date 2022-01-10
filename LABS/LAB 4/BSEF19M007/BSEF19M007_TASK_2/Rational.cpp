//ANNS SHAHBAZ BSEF19M007
#include "Rational.h"
#include<iostream>

using namespace std;


Rational::Rational(int num, int den) {

	set(num,den); // calling set, was told in instructions to call it. 

}

void Rational::set(int P, int Q) {

	this->p = P; //setting P

	if (Q == 0) {	//checking if P = 0

		this->q = 1;

	}

	else {

		
		this->q = Q;
	}
}


void Rational::show() const{ //displaying

	cout << " => The numerator of the rational number is: " << this->p << endl;
	cout << " => The denominator of the rational number is: " << this->q << endl;

}

void Rational::simplify() {

	int gcdP = 1,gcdQ = 1 ,gcd = 1; //Created to help in finding GCD
	bool P_neg, Q_neg; //to have a check wether P & Q are positive or negative

	if (p < 0) { //if negative then Coverting to positive for computations, won't affect the answer
		p = -p;
		P_neg = true;
	}
	else
		P_neg = false;

	if (q < 0) { //if negative then Coverting to positive for computations, won't affect the answer
		q = -q;
		Q_neg = true;
	}
	else
		Q_neg = false;

	for (int i = 1; i <= p || i<= q; i++) {  //finding the GCD first
		
		if (i <= p) {

			if (p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= q) {

			if (q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {
		
			gcd = gcdP;

		}

	}

	cout << "\n => The GCD of P & Q is: " << gcd << endl << endl; //GCD found


	for (int i = 1; i <= p || i <= q; i++) { //dividing p & q by their GCD
	
	

		if (gcd == 1) {
				
			break;
		}


		p = p / gcd;
		q = q / gcd;
		  
		// checking if there is still any GCD except 1

		if (i <= p) {

			if (p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= q) {

			if (q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}


		if (gcd == 1)
			break;


	}
	
	if (P_neg == true) { //if from negative was converted to positive, changing to its actual condition
		p = -p;
	}

	if (Q_neg == true) { //if from negative was converted to positive, changing to its actual condition
		q = -q;
	}

	cout << " => After division: " << endl; //displaying
	show();

}

Rational Rational::add(Rational& r) { 

	Rational Resultant(1,1); //resultant

	bool P_neg, Q_neg;


	//adding the rational numbers

	if (this->q == r.q) {

		Resultant.p = this->p + r.p;
		Resultant.q = this->q;
	
	}

	else {
	
		Resultant.p = (this->p) * (r.q) + (this->q) * (r.p);
		Resultant.q = (this->q) * (r.q);

	}

// from line 166 to 263, Simplification process is done, e.g. if ans was 12/20, then making it to 3/5 

	int gcd = 1, gcdP = 1, gcdQ = 1;

	if (Resultant.p < 0) {
		Resultant.p = -Resultant.p;
		P_neg = true;
	}

	else
		P_neg = false;

	if (Resultant.q < 0) {
		Resultant.q = -Resultant.q;
		Q_neg = true;
	}

	else
		Q_neg = false;


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) {  //finding the GCD first

		if(i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}



	}


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) { //dividing p & q by their GCD



		if (gcd == 1) {

			break;
		}


		Resultant.p = Resultant.p / gcd;
		Resultant.q = Resultant.q / gcd;

		// checking if there is still any GCD except 1

		if (i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}


		if (gcd == 1)
			break;


	}


	if (P_neg == true) {
		Resultant.p = -Resultant.p;
	}

	if (Q_neg == true) {
		Resultant.q = -Resultant.q;
	}

	

	return Resultant;


}

Rational Rational::subtract(Rational& r) {

	bool P_neg, Q_neg;

	Rational Resultant(1, 1); //resultant

	//subtracting the rational numbers

	if (this->q == r.q) {

		Resultant.p = this->p - r.p;
		Resultant.q = this->q;

	}

	else {

		Resultant.p = (this->p) * (r.q) - (this->q) * (r.p);
		Resultant.q = (this->q) * (r.q);

	}

// from line 295 to 392, Simplification process is done, e.g. if ans was 12/20, then making it to 3/5 

	int gcd = 1, gcdP = 1, gcdQ = 1;

	if (Resultant.p < 0) {
		Resultant.p = -Resultant.p;
		P_neg = true;
	}
	else
		P_neg = false;

	if (Resultant.q < 0) {
		Resultant.q = -Resultant.q;
		Q_neg = true;
	}
	else
		Q_neg = false;


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) {  //finding the GCD first

		if (i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}



	}


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) { //dividing p & q by their GCD



		if (gcd == 1) {

			break;
		}


		Resultant.p = Resultant.p / gcd;
		Resultant.q = Resultant.q / gcd;

		// checking if there is still any GCD except 1

		if (i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}


		if (gcd == 1)
			break;


	}


	if (P_neg == true) {
		Resultant.p = -Resultant.p;
	}

	if (Q_neg == true) {
		Resultant.q = -Resultant.q;
	}


	return Resultant;

}


Rational Rational::mul(Rational& r) {

		bool P_neg, Q_neg;


	Rational Resultant(1, 1); //resultant

	//multiplying the rational numbers

	Resultant.p = this->p * r.p;
	Resultant.q = this->q * r.q;


	// from line 413 to 512, Simplification process is done, e.g. if ans was 12/20, then making it to 3/5 


	int gcd = 1, gcdP = 1, gcdQ = 1;

	if (Resultant.p < 0) {
		Resultant.p = -Resultant.p;
		P_neg = true;
	}
	else
		P_neg = false;

	if (Resultant.q < 0) {
		Resultant.q = -Resultant.q;
		Q_neg = true;
	}
	else
		Q_neg = false;


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) {  //finding the GCD first

		if (i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}



	}


	for (int i = 1; i <= Resultant.p || i <= Resultant.q; i++) { //dividing p & q by their GCD



		if (gcd == 1) {

			break;
		}


		Resultant.p = Resultant.p / gcd;
		Resultant.q = Resultant.q / gcd;

		// checking if there is still any GCD except 1

		if (i <= Resultant.p) {

			if (Resultant.p % i == 0) {
				gcdP = i;
			}
		}


		if (i <= Resultant.q) {

			if (Resultant.q % i == 0) {
				gcdQ = i;
			}
		}

		if (gcdP == gcdQ) {

			gcd = gcdP;

		}


		if (gcd == 1)
			break;


	}



	if (P_neg == true) {
		Resultant.p = -Resultant.p;
	}

	if (Q_neg == true) {
		Resultant.q = -Resultant.q;
	}



	return Resultant;
}

