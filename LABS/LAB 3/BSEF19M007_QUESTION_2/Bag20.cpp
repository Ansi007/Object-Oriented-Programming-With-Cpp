// ANNS SHAHBAZ BSEF19M007
#include "Bag20.h"
#include<iostream>

//declaring Class Bag20 Functions

Bag20::Bag20() {	//default construction

	for (int i = 0; i < 20; i++)
		Bag[i] = 0;

	current_size = 0;

}

void Bag20::insert(int Input_Number ) {

	Bag[current_size++] = Input_Number; //inserting value

}

int Bag20::GetSize() {

	return current_size; //getting size

}

void Bag20::SetSize(int size) {

	current_size = size; //setting size

}

void Bag20::show() {
	 

	for (int i = 0; i < current_size; i++) {
	
		std::cout << Bag[i] << " "; //displaying content
	}
	std::cout << std::endl;
}


int Bag20::elemenAt(int index) {

	if (index >= current_size || index < 0) { // checking index boundary
	
		std::cout << " => Index goes out of bound " << std::endl;
		return -1;

	}

	else {
	
		return Bag[index];

	}

}


int Bag20::findFrequency(int Input_Number) {

	int frequency = 0;

	for (int i = 0; i < current_size; i++) {
	
	
		if (Bag[i] == Input_Number)
			frequency++;

	}

	return frequency;
}



void Bag20::Delete(int Input_Number) {

	int* DeletionArray, DeletionArrayIndex = 0;
	DeletionArray = new int[current_size]; //Dynamic array to help in deletion

	for (int i = 0; i < current_size; i++) { 

		if (Bag[i] != Input_Number)
			DeletionArray[DeletionArrayIndex++] = Bag[i]; //deleting element


	}

	for (int i = 0; i < current_size; i++)
		Bag[i] = 0; //setting to 0

	for (int i = 0; i < DeletionArrayIndex; i++) {

		Bag[i] = DeletionArray[i]; //copying array

	}

	current_size = DeletionArrayIndex;

	delete[] DeletionArray; //deleting dynamic memory
}




Bag20 Bag20::Union(Bag20 Bag2) {


	Bag20 Bag3; //for the union
	Bag3.current_size = current_size + Bag2.current_size;

	if (Bag3.current_size > 20) { //checking overflow
		std::cout << " => Merging size is bigger than 20, Overflow occured. Merging first 20 only " << std::endl;
		Bag3.current_size = 20;
	}

	
		int SecondIndex = 0;
		for (int i = 0; i < current_size; i++) {

			Bag3.Bag[i] = Bag[i]; //merging first

		}


		for (int i = current_size; i < Bag3.current_size; i++) {

			Bag3.Bag[i] = Bag2.Bag[SecondIndex++]; //merging second


		}

		return Bag3;
	
}


int Bag20::findEquilibriumIndex(Bag20 Bag3) {

	int left = 0; //left sum
	int right = 0; //right sum
	int i = 0; //for iteration
	int x = 0; //As a check of equlilibrium


	for (int l = 0; l < current_size; l++) {


		for (i = l - 1; i >= 0; i--) {

			left = left + Bag3.Bag[i]; //left sum

		}

		for (i = l + 1; i <= current_size - 1; i++) {

			right = right + Bag3.Bag[i]; //right sum

		}

		if (left == right) { //checking equlilibrium

			return l;
			x = 1;
		}


		left = 0;
		right = 0;

	}

	if (x != 1) // if equlilibrium didn't occur
		return -1;
	
}



Bag20 Bag20::leftRotate(Bag20 Bag3, int RotatingFactor) {

	int* RotatingArray;
	RotatingArray = new int[Bag3.current_size]; // Dynamic Array to help in rotation
	

	for (int a = 0; a < RotatingFactor; a++) { // Looping untill the rotating factor is reached

		for (int j = 0; j < Bag3.current_size; j++) 
			RotatingArray[j] = Bag3.Bag[j]; // copying array


		for (int i = 0; i < Bag3.current_size; i++) {  //rotating array

			if (i == 0)
				Bag3.Bag[Bag3.current_size - 1] = RotatingArray[i];

			else
			Bag3.Bag[i - 1] = RotatingArray[i];



		}

	}

	delete[] RotatingArray; //deleting dynamic memory

	return Bag3;
}

Bag20 Bag20::Merge(Bag20 Bag3 ) { //Function Made to Help putting Bag1 & Bag3 in Bag4


	Bag20 Bag4;

	//determining the Array Size by checking the particular condtions
	//As depending on Bag 1 and Bag 3 sizes three differen situations can occur

	if (current_size > Bag3.current_size)  
		Bag4.current_size = current_size * 2 - 1; // if more even indexes are required than odd


	else if(current_size == Bag3.current_size) //if both even indexes required and odd indexes required are same
		Bag4.current_size = current_size  + Bag3.current_size;

	else 
		Bag4.current_size = Bag3.current_size * 2; // if more odd indexes are required than even

	if (Bag4.current_size > 20) { //if overflow occured
	
		std::cout << " => Overflow occured size greater than 20. Getting first 20 only." << std::endl;
		Bag4.current_size = 20;

	}

	int Bag3Index = 0; //for iteration
	int Bag1Index = 0; 

	for (int i = 0; i < Bag4.current_size; i++) {

		if (i % 2 == 0) {

			Bag4.Bag[i] = Bag[Bag1Index++]; //Putting Bag1 Values at even indexes

		}

		else {

			Bag4.Bag[i] = Bag3.Bag[Bag3Index++];  //Putting Bag3 Values at odd indexes

		}
	}


	return Bag4;

}

