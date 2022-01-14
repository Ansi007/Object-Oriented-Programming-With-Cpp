#include<iostream>
#include "PrimeNumberGenerator.h"

using namespace std;

int main() {

	PrimeNumberGenerator Prime;
	int Input = 0; 

	while (Prime.getInput() != -1) 
	{
		cout << " => Enter 1 if you want to reset." << endl;
		cout << " => Enter 2 if you want to get next prime number. " << endl;
		cout << " => Enter -1 to quit: ";
		cin >> Input;
		Prime.SetInput(Input);

		switch (Prime.getInput())
		{
		case 1:
			Prime.reset();
			Prime.ShowPrime();
			break;
		case 2:
			Prime.getNextPrime();
			Prime.ShowPrime();
			break;
		case -1:
			break;
		default:
			cout << " => Wrong Input, Try again." << endl;
			break;
		}

		cout << endl;
	}

	return 0;
}