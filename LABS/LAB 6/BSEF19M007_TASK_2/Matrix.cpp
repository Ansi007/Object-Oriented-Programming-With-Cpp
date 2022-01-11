//ANNS SHAHBAZ BSEF19M007
#include "Matrix.h"
#include<iostream>

using namespace std;

//Static initializations
int Matrix::I = 0; 
int Matrix::J = 0;
bool Matrix::check = false;


Matrix::Matrix() {	//default constructor

	mat = new int* [3];
	for (int i = 0; i < 3; i++)
		mat[i] = new int[3];

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			mat[i][j] = 0; //setting to zero

		}
	}


}

void Matrix::SetMatrix(int i,int j, int value) {

	mat[i][j] = value; //setting value

}
//displaying
void Matrix::Display() {


	for (int i = 0; i < 3; i++) {

		cout << "| ";

		for (int j = 0; j < 3; j++) {

			cout << mat[i][j] << " ";

		}
		cout << "|";
		cout << endl;
	}

}

Matrix Matrix::operator + (Matrix m2) { 

	Matrix temp;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = mat[i][j] + m2.mat[i][j]; //Adding two matrices

		}
	}


	return temp;

}

Matrix Matrix::operator - (Matrix m2) {

	Matrix temp;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = mat[i][j] - m2.mat[i][j]; //Subtracting two matrices

		}
	}


	return temp;

}


Matrix Matrix::operator * (Matrix m2) {

	Matrix temp;

	int a = 0, c = 0;	//for getting the right index value

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = 0;

			for (int b = 0; b < 3; b++) 
				temp.mat[i][j] = temp.mat[i][j] + mat[a][b] * m2.mat[b][c]; //Multiplying two matrices
			
			c++;
		}

		c = 0;
		a++;
	}


	return temp;

}

Matrix Matrix::operator * (int num) {

	Matrix temp;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = mat[i][j] * num; //Multplying  matrix with a scalar/scaling matrix

		}
	}


	return temp;

}


Matrix::operator int() {

	return (mat[I][J]);	//Returning specific index value
	//static I J used here
}


Matrix Matrix::operator * (int* vec) {

	Matrix temp;


	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = mat[i][j] * vec[j]; // Multiplying Matrix with 1D array

		}
	}


	return temp;

	
}

bool Matrix::operator > (Matrix m2) { 
	
	bool check = false; 

	for (int i = 0; i < 3; i++) {
	
		for (int j = 0; j < 3; j++) {
			
			//Checking if greater or not

			if (mat[i][j] > m2.mat[i][j]) { 
				check = true;
			}

			if (mat[i][j] < m2.mat[i][j]) {
				check = false;
				break;
			}
			
		}
	}

	return check;
}

bool Matrix::operator < (Matrix m2) {

	bool check = false;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			//Checking if lesser or not

			if (mat[i][j] < m2.mat[i][j]) {
				check = true;
			}

			if (mat[i][j] > m2.mat[i][j]) {
				check = false;
				break;
			}
		}
	}

	return check;
}

bool Matrix::operator >= (Matrix m2) { // m1 >= m2

	bool check = true;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			//Checking if greater,equal or not

			if (mat[i][j] < m2.mat[i][j]) {
				check = false;
				break;
			}
		}
	}

	return check;
}

bool Matrix::operator <= (Matrix m2) {

	bool check = true;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			
			//Checking if lesser equal or not

			if (mat[i][j] > m2.mat[i][j]) {
				check = false;
				break;
			}
		}
	}

	return check;
}

bool Matrix::operator == (Matrix m2) {

	bool check = true;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			//Checking if equal or not

			if (mat[i][j] != m2.mat[i][j]) {
				check = false;
				break;
			}
		}
	}

	return check;
}

Matrix Matrix::operator ^ (int num) {

	Matrix temp;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = pow(mat[i][j],num);	// Taking power of indiviual elements

		}
	}


	return temp;



}

Matrix Matrix::operator / (int num) {

	Matrix temp;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			temp.mat[i][j] = mat[i][j] / num;	//divind matrix 

		}
	}


	return temp;



}

void Matrix::Destructor_Allowed() {
	check = true;
}

Matrix::~Matrix() {

	if(check == true) {
	
		for (int i = 0; i < 3; i++) {
			delete[] mat[i];
		}

		delete[] mat; 
		mat = 0;




	}

}




