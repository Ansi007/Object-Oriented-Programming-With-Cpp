//ANNS SHAHBAZ BSEF19M007
#include "Convolution_Operation.h"
#include <iostream>
using namespace std;

bool image::check = false;		//initializing static members
bool mask::Check = false;

image::image() {		//default
	
		Size = 30;
		Image_Array = new double* [Size];
		for (int i = 0; i < Size; i++) {
			Image_Array[i] = new double[Size];
		}

		for (int i = 0; i < 30; i++)
			for (int j = 0; j < 30; j++)
				Image_Array[i][j] = 0;


}

image::image(int size) {	//parameterized

	Size = size;
	Image_Array = new double* [size];
	for (int i = 0; i < size; i++) {
		Image_Array[i] = new double[size];
	}

	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			Image_Array[i][j] = 0;

}

image::~image() {		//destructor

	if (check == true) {
		for (int i = 0; i < Size; i++)
			delete[] Image_Array[i];
		delete[]Image_Array;
	}
}

void image::set(int I, int J, double Value) {

	Image_Array[I][J] = Value;		//set image values
}

image image::performConvolution(mask m1, int SIZE) {

	image Convolued(SIZE);		//Temperaroy image

	double Convolued_Value = 0;
	double Help[3][3] = {1,1,1,1,1,1,1,1,1};		//Array to help in masking
	int L = 0, R = 0;			//for indexes

	for (int i = 0; i < Size; i++) {
	
		for (int j = 0; j < Size; j++) {


			L = i - 1; R = j - 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[0][0] = Image_Array[L][R]; // i - 1, j - 1
			else
				Help[0][0] = 1;


			L = i - 1; R = j;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[0][1] = Image_Array[L][R]; //i - 1

			else
				Help[0][1] = 1;



			L = i - 1; R = j + 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[0][2] = Image_Array[L][R]; // i - 1, j + 1

			else
				Help[0][2] = 1;



			L = i; R = j - 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[1][0] = Image_Array[L][R]; // j - 1 

			else
				Help[1][0] = 1;


			L = i; R = j;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[1][1] = Image_Array[L][R]; //normal

			else
				Help[1][1] = 1;


			L = i; R = j + 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[1][2] = Image_Array[L][R]; // j + 1

			else
				Help[1][2] = 1;


			L = i + 1; R = j - 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[2][0] = Image_Array[L][R]; // i + 1, j - 1

			else
				Help[2][0] = 1;


			L = i + 1; R = j;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[2][1] = Image_Array[L][R]; //i + 1

			else
				Help[2][1] = 1;

			L = i + 1; R = j + 1;
			if (L >= 0 && L < Size && R >= 0 && R < Size)		//to check if index is not going out of range
				Help[2][2] = Image_Array[L][R]; // i + 1, j + 1

			else
				Help[2][2] = 1;


			for (int a = 0; a < 3; a++) {		//masking

				for (int b = 0; b < 3; b++) {

					Convolued_Value = Convolued_Value + (Help[a][b] * m1.get(a,b));
					
				}
					
			}
			
			Convolued.set(i, j, Convolued_Value);		//setting masked image
			Convolued_Value = 0;		//reseting value

			for (int Q = 0; Q < 3; Q++)		//reseting help matrix
				for (int W = 0; W < 3; W++)
					Help[Q][W] = 1;


		}


	}

	return Convolued;	//return image
}

void image::Display() {		//display
	
	for (int Q = 0; Q < Size; Q++) {
		for (int W = 0; W < Size; W++) {
			cout << Image_Array[Q][W] << " ";
		}
		cout << endl;
	}
}

void image::Allow() {

	image::check = true;	//allow destructor
}

mask::mask(){		//default mask

	Size = 3;
	Mask_Array = new double* [Size];
	for (int i = 0; i < Size; i++) {
		Mask_Array[i] = new double[Size];
	}

	for (int i = 0; i < Size; i++)
		for (int j = 0; j < Size; j++)
			Mask_Array[i][j] = 0;

}

mask::~mask() {	//destructor

	if (Check == true) {
		for (int i = 0; i < 3; i++)
			delete[] Mask_Array[i];
		delete[] Mask_Array;
	}
}

void mask::set(int I, int J, double Value) {

	Mask_Array[I][J] = Value;	//set mask
}

double mask::get(int I, int J) {
	return Mask_Array[I][J];		//get specific index value
}

void mask::Display() {		//display

	for (int Q = 0; Q < 3; Q++) {
		for (int W = 0; W < 3; W++) {
			cout << Mask_Array[Q][W] << " ";
		}
		cout << endl;
	}

}

void mask::Allow() {		//to allow destructor
	mask::Check = true;
}
