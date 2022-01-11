//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Matrix.h"

using namespace std;

void Help(int i , int j) { //Used for Num/Vec * Object

	Matrix::I = i;	//Set value of I
	Matrix::J = j;	//Set value of J
}

int main() {

	Matrix m1,m2;	//declaring two matrices
	int value;	//Matrix value

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			cout << " => Give the value for the matrix m1 at [" << i << "][" << j << "]: ";
			cin >> value;
			m1.SetMatrix(i,j,value);

			cout << " => Give the value for the matrix m2 at [" << i << "][" << j << "]: ";
			cin >> value;
			m2.SetMatrix(i, j, value);

		}

	}
		//displaying matrices
	cout << "\n => Displaying Matrix 1. " << endl << endl;
	m1.Display();
	cout << "\n => Displaying Matrix 2. " << endl << endl;
	m2.Display();


	Matrix result;	//Resultant matrix for computation

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	result = m1 + m2;	// By Overloaded Operator +
	cout << " => Resultant of Matrix 1 + Matrix 2 is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl << endl;
	result = m1 - m2;// By Overloaded Operator -
	cout << " => Resultant of Matrix 1 - Matrix 2 is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl << endl;
	result = m1 * m2; // By Overloaded Operator *
	cout << " => Resultant of Matrix 1 * Matrix 2 is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl << endl;
	int num;
	cout << " => Give the value of scalar multiple (num): ";
	cin >> num;
	result = m1 * num; // By Overloaded Operator * 
	cout << " => Resultant of Matrix 1 * num is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl << endl;
	cout << " => Give the value of scalar multiple (num): ";
	cin >> num;


	for (int i = 0; i < 3; i++) {


		for (int j = 0; j < 3; j++) {

			Help(i,j);//To get value of specific index
			result.SetMatrix(i, j, num * m1); //// By Overloaded Operator *
			

		}
		
	}


	cout << " => Resultant of num * Matrix is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "----------------------------------------------------------------------------" << endl << endl;
	int vec[3]; //1D array
	cout << " => Give the value of scalar multiple (vec 1d array): " << endl;
	for (int i = 0; i < 3; i++) {
		cout << " =>  Value " << i << " : ";
		cin >> vec[i];

	}

	result = m1 * vec;
	cout << "\n => Resultant of Matrix 1 * Vec (1D array) is: " << endl << endl;
	result.Display();
	cout << endl;
	
	cout << "----------------------------------------------------------------------------" << endl << endl;
	cout << " => Give the value of scalar multiple (vec 1d array): " << endl;
	for (int i = 0; i < 3; i++) {
		cout << " =>  Value " << i << " : ";
		cin >> vec[i];

	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

			Help(i, j); //To get the value of Specific Index
			result.SetMatrix(i, j, vec[j] * m1); // By Overloaded Operator *


		}

	}



	cout << "\n => Resultant of  Vec (1D array) * Matrix 1 is: " << endl << endl;
	result.Display();
	cout << endl;


	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	if (m1 > m2) // By Overloaded Operator >
		cout << " =>  Matrix 1 is Greater than Matrix 2." << endl;
	else
		cout << " =>  Matrix 1 is not Greater than Matrix 2." << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	if (m1 < m2) // By Overloaded Operator <
		cout << " =>  Matrix 1 is Less than Matrix 2." << endl;
	else
		cout << " =>  Matrix 1 is not Less than Matrix 2." << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	if (m1 >= m2) // By Overloaded Operator >=
		cout << " =>  Matrix 1 is Greater or Equal to Matrix 2." << endl;
	else
		cout << " =>  Matrix 1 is not Greater or Equal to Matrix 2." << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	if (m1 <= m2) // By Overloaded Operator <=
		cout << " =>  Matrix 1 is Less or Equal to Matrix 2." << endl;
	else
		cout << " =>  Matrix 1 is greater or Equal to Matrix 2." << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	if (m1 == m2) // By Overloaded Operator == 
		cout << " =>  Matrix 1 is Equal to Matrix 2." << endl;
	else
		cout << " =>  Matrix 1 is not Equal to Matrix 2." << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	cout << " => Give the value of scalar power (num): ";
	cin >> num;
	result =  m1 ^ num; // By Overloaded Operator ^
	cout << " => Resultant of Matrix 1 ^ num is: " << endl << endl;
	result.Display();
	cout << endl;

	cout << "\n----------------------------------------------------------------------------" << endl << endl;
	cout << " => Give the value scalar divider (num): ";
	cin >> num; 
	result = m1 / num; // By Overloaded Operator /
	cout << " => Resultant of Matrix 1 / num is: " << endl << endl;
	result.Display();
	cout << endl;

	m1.Destructor_Allowed();
	return 0;
}