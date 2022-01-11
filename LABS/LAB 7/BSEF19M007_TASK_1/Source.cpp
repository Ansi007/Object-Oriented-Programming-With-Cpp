//BSEF19M007 ANNS SHAHBAZ
#include<iostream>
#include <string>
#include "Book.h"

using namespace std;

int main() {

	//CREATING OBJECTS
	Fiction F[3];
	Non_Fiction N[3];

	//FOR INTPUT
	string tit, auth;
	int level, pages;

	//SETTTING NON FUCTION BOOK AND DISPLAYING
	for (int i = 0; i < 3; i++) {

		//TAKING INPUTS
		cout << "-------------------------------------------------------------------------" << endl;
		cout << " => Give the title of the Non Fiction Book: ";
		getline(cin, tit);

		cout << " => Give the Name of The Author of the Non Fiction Book: ";
		getline(cin, auth);

		cout << " => Give the No of Pages of the Non Fiction Book: ";
		cin >> pages;
		cin.ignore();


		N[i].setPages(pages, tit, auth);
	}

	cout << "-------------------------------------------------------------------------" << endl;


	for (int i = 0; i < 3; i++) {
		N[i].show();
		cout << "-------------------------------------------------------------------------" << endl;

	}

	//SETTING FICTION BOOK AND DISPLAYING
	for (int i = 0; i < 3; i++) {

		cout << "-------------------------------------------------------------------------" << endl;

		cout << " => Give the title of the Fiction Book: ";
		getline(cin, tit);


		cout << " => Give the Name of The Author of the Fiction Book: ";
		getline(cin, auth);

		cout << " => Give the Level of the Non Fiction Book: ";
		cin >> level;
		cin.ignore();


		F[i].setLevel(level, tit, auth);
	}

	cout << "-------------------------------------------------------------------------" << endl;


	for (int i = 0; i < 3; i++) {
		F[i].show();
		cout << "-------------------------------------------------------------------------" << endl;

	}


	cout << "-------------------------------------------------------------------------" << endl;



	return 0;
}
