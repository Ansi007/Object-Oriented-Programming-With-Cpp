//BSEF19M007 ANNS SHAHBAZ

#include<iostream>
#include "RFID.h"

using namespace std;

int main() {

	ShippingContainer* obj[6];  //ARRAY OF OBJECT POINTERS
	string s;
	int id;
	int quantity = 0;

	for (int i = 0; i < 3; i++)
	obj[i] = new ManualShippingContainer;		

	for (int i = 3; i < 6; i++)
		obj[i] = new RFIDShippingContainer;


	for (int i = 0; i < 3; i++) {

		cout << "=> Give ID: ";				//GETTING INPUTS
		cin >> id;
		cin.ignore();

		cout << "=> Give description of contents: ";
		getline(cin, s);

			//SETTING INPUTS

		obj[i]->setID(id);
		obj[i]->setManifest(s);

		cout << "-----------------------------------------------------" << endl;

	}

	for (int i = 3; i < 6; i++) {

		//GETTING INPUTS

		cout << "=> Give ID: ";
		cin >> id;
	

		cout << "=> Give Amount/Quantity of content: ";
 		cin >> quantity;
		cin.ignore();

		cout << "=> Give description of it: ";
		getline(cin, s);

		//SETTING INPUTS

		obj[i]->setID(id);
		obj[i]->add(i, quantity, s);
		
		cout << "-----------------------------------------------------" << endl;

	}

	cout << "-----------------------------------------------------" << endl;

	for (int i = 0; i < 6; i++) {

		//DISPLAYING 

		cout << "=> ID: " << obj[i]->getID() << endl;
		cout << "=> MANIFEST: " << obj[i]->getManifest() << endl;
		cout << "-----------------------------------------------------" << endl;

	}
	//DISPLAYING LIST

	cout << "=> LIST IS: " << endl;
	cout << "=> " << obj[3]->getList();
	cout << endl;
	cout << "-----------------------------------------------------" << endl;

	return 0;
}