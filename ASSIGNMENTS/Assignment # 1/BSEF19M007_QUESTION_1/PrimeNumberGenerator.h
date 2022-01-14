#pragma once
class PrimeNumberGenerator
{
private: //data members
	int prime_value;
	int input = 0;

public://members function
	PrimeNumberGenerator(); //default constructor
	int getInput();	//to get input
	void SetInput(int ); //to set input
	void reset(); //to reset prime value
	int getNextPrime(); //to get prime number
	void ShowPrime(); //to display prime number



};

