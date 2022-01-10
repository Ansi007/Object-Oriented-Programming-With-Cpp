//ANNS SHAHBAZ BSEF19M007
#pragma once
class Polynomial {

private: //data members
	int* coef;	//dynamic memory
	int degree;	//highest degree
	static bool Destructor_Allowed; // So that temporary memories dont get deleted before returning 

public://member functions
	Polynomial(int );	//constructor
	Polynomial(const Polynomial&);	//deep copying construcotr
	void set(int , int , int);	//set function
	void display();	//display function
	Polynomial operator + (Polynomial);	//Overloaded + Operator
	Polynomial operator - (Polynomial);	//Overloaded - Operator
	Polynomial operator += (Polynomial);	//Overloaded += Operator
	Polynomial operator -= (Polynomial);	//Overloaded -= Operator
	bool operator > (Polynomial);	//Overloaded > Operator
	bool operator < (Polynomial);	//Overloaded < Operator
	bool operator == (Polynomial);	//Overloaded == Operator
	bool operator >= (Polynomial);	//Overloaded >= Operator
	bool operator <= (Polynomial);	//Overloaded <= Operator
	bool operator != (Polynomial);	//Overloaded != Operator

	/*Without using the concept of RVO, temperory objects were being deleted and causing problems, to overcome that
	 I have made a static member Destructor_Allowed */

	void SetTempCheck();  //To allow destructor
	~Polynomial();	//Destructor
};

