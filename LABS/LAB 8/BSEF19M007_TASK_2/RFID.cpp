//BSEF19M007 ANNS SHAHBAZ

#include<iostream>
#include<string>
#include "RFID.h"

using namespace std;

string RFIDShippingContainer::Storing = "";		//STATIC INITIALIZATION


struct Addition {		//CUSTROM DATA STRUCTURE, USED FOR ADDING LIST

	int quantity[3];
	string manifest[3];

};

Addition adder;		//GLOBAL 


ShippingContainer::ShippingContainer() {
	ID = 0;
}

void ShippingContainer::setID(int id) {
	ID = id;
}

int ShippingContainer::getID() {
	return ID;
}

string ShippingContainer::getManifest() {

	return string();
}

void ShippingContainer::setManifest(string ) {
	//NO IMPLEMENTAION REQUIRED
}

void ShippingContainer::add(int, int, string) {
	//NO IMPLEMENTAION REQUIRED
}

string ShippingContainer::getList() {
	return string();
}

ManualShippingContainer::ManualShippingContainer() {
	Manifest = "";
}

void ManualShippingContainer::setManifest(string S) {

	Manifest = S;

}

string ManualShippingContainer::getManifest() {

	return Manifest;

}

RFIDShippingContainer::RFIDShippingContainer() {
	Manifest = "";
	
}

void RFIDShippingContainer::add(int k, int i, string S) {		//ADDER FUNCTION


	adder.quantity[k - 3] = i;		//SETTING THE AMOUNT/QUANTITIY OF CONTNET
	adder.manifest[k - 3] = S + ".";		//SETTING CONTNET

	string strf = to_string(i);		//CONVERTING INT TO STRING
	Manifest = strf + " " + S;		//SETTING MANIFEST


	if (k == 5) {	//WHEN LAST OBJECT IS REACHED NOW WE NEED TO CHECK ALL AND ADD THEM

		//CONVERTING INT TO STRINGS
		string str = to_string(adder.quantity[0]);
		string str1 = to_string(adder.quantity[1]);
		string str2 = to_string(adder.quantity[2]);

		bool c1 = false, c2 = false;		//USED TO CHECK IF SAME CONTENT OCCURED OR NOT

		if (adder.manifest[0] == adder.manifest[1]) {	

			adder.quantity[0] = adder.quantity[0] + adder.quantity[1];	//ADDING QUANTITY
			str = to_string(adder.quantity[0]);
			c1 = true;

		}

		if (adder.manifest[0] == adder.manifest[2]) {

			adder.quantity[0] = adder.quantity[0] + adder.quantity[2];
			str = to_string(adder.quantity[0]);
			c2 = true;


		}

		if (adder.manifest[1] == adder.manifest[2]) {

			adder.quantity[1] = adder.quantity[1] + adder.quantity[2];
			str2 = to_string(adder.quantity[2]);
			c2 = true;

		}

		if (c1 == true) {
			adder.manifest[1] = "";	//WHEN SAME CONTENTS OCCURED THERE WAS NO NEED TO DISPLAY IT AGAIN AND AGAIN
			str1 = "";
		}

		if (c2 == true) {

			adder.manifest[2] = "";
			str2 = "";		//WHEN SAME CONTENTS OCCURED THERE WAS NO NEED TO DISPLAY IT AGAIN AND AGAIN

		}

		//CREATING LIST
			Storing = str + " " + adder.manifest[0]  + str1 + " " + adder.manifest[1]  + str2 + " " + adder.manifest[2];

		

	

		

	}

	
}

string RFIDShippingContainer::getManifest() {

	return Manifest;

}

string RFIDShippingContainer::getList() {

	return Storing;

}
