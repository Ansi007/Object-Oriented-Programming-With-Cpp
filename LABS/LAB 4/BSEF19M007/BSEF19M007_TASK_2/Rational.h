//ANNS SHAHBAZ BSEF19M007
#pragma once
class Rational
{
private: //data members
	int p, q;
	 
public:	 //members functions
	Rational(int , int); //call set
	void set(int, int); //to set P & Q
	void show()const; //to display P & Q
	void simplify();	//simplifying the number
	Rational add(Rational &r); //adding two rational numbers
	Rational subtract(Rational &r); //subtracting two rational numbers
	Rational mul(Rational &r); //multiplying two rational numbers

};

