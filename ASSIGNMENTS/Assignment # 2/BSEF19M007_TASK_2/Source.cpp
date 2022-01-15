//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Convolution_Operation.h"

using namespace std;

int main() {

	int size; //for Square Image size
	double value; //for values
	cout << " => Give the size of Square Image: ";
	cin >> size;  

	image i1(size); // Creating Image
	cout << " => Give Image Values" << endl;
	//setting values
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			cin >> value;
			i1.set(i, j, value);
		
		}
	
	}

	mask m1; //Creating Mask
	//setting Mask Values
	cout << " => Give mask (3 by 3) Values" << endl; //Mask is 3 by 3 fixed (As per instructed in the lecture)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			cin >> value;
			m1.set(i, j, value);

		}

	}
	
	cout << "---------------------------------------------" << endl;
	//displaying
	cout << " => Image" << endl;
	i1.Display();

	cout << "---------------------------------------------" << endl;
	cout << " => Mask" << endl;
	m1.Display();

	image Convolued(size); //Creating Convolued image object
	Convolued = i1.performConvolution(m1,size); //Masking the image

	//displaying
	cout << "---------------------------------------------" << endl;
	cout << " => Masked Image" << endl;
	Convolued.Display();
	
	//Allowing Destructor
	i1.Allow();
	m1.Allow();

	return 0;
}