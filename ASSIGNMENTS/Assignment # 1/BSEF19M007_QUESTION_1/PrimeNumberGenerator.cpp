#include "PrimeNumberGenerator.h"
#include<iostream>

PrimeNumberGenerator::PrimeNumberGenerator() { 

	prime_value = 0;
	input = 0;
}


int PrimeNumberGenerator::getInput() { 

	return input; 

}


void PrimeNumberGenerator::SetInput(int Input) { 

	input = Input;

}


void PrimeNumberGenerator::reset() { 

	prime_value = 0;

}

int PrimeNumberGenerator::getNextPrime() { 



	int check = 0; 
	int prime;
	prime = prime_value;
	prime++;

	//finding the next prime number

	for ( int i = 1; i <= prime; i++) {
	
		if (prime % i == 0)
			check++;



		if (check == 2 && i == prime) {

			prime_value = prime;
			return prime_value;
			
		}

		if (check != 2 && i == prime) {
			prime++;
			check = 0;
			i = 0;
		}

	}


}

void PrimeNumberGenerator::ShowPrime() { //displaying
	
	std::cout << " => Counter Value: " << prime_value << std::endl;

}
