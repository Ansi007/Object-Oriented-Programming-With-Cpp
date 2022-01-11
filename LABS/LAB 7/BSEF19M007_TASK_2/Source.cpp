//BSEF19M007 ANNS SHAHBAZ
#include<iostream>
#include "Employee.h"

using namespace std;

int main() {
	BankCredit B[5];
	int no_of_employees;

	cout << "=> How many employees are there? : "; //no use of it
	cin >> no_of_employees;
	cin.ignore();

	for (int i = 0; i < 5; i++) {
		cout << "------------------------------------------------" << endl;
		cout << "=> Give the following details: " << endl;
		B[i].getBankDetails();		//getting details

	}

	for (int i = 0; i < 5; i++) {
		cout << "------------------------------------------------" << endl;
		B[i].Print();	//printing details

	}

	return 0;
}