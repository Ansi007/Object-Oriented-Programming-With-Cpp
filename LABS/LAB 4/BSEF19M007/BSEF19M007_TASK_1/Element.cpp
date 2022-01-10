//ANNS SHAHBAZ BSEF19M007
#include "Element.h"
#include<iostream>
using namespace std;


// initializing static int members in CPP as compiler doesn't allow to modify them if we intialize in .h

int Element::size = 0; 
int Element::Alpha = 0;
int Element::Beta = 0;


Element::Element() {

	ID = 0;
	pointer = 0;
	size++;
}

void Element::setVal(int ID, int alpha , int beta) {


	this->ID = ID;
	this->Alpha = alpha;
	this->Beta = beta;

}


void Element::setPointer() {


	if (this->Alpha == 1) {  //condition to point to Alpha
	
		pointer = &Alpha;
	}

	else {

		pointer = &Beta; //else pointing to beta

	}
}

int Element::getSize() {

	return size; //returning size

}

int Element::getID() {

	return ID; //returning ID

}

int * Element::getAlpha() { //Used to print the Alpha address

	return &Alpha; //returning Alpha Address
	
}

int *Element::getBeta() { //Used to print the Beta address

	return &Beta; //returning Beta Address

}

void Element::printPointerAddress(Element e) {


	cout << " => Pointer address:" << e.pointer << endl; //returning pointer contents

}

