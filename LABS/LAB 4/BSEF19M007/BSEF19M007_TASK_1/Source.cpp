//ANNS SHAHBAZ BSEF19M007
#include <iostream>
#include "Element.h"

using namespace std;

int main() {

	int No_Of_Elements = 0; //array size
	int id = 0,alpha = 0,beta = 0;
	cout << " => Enter the number of elements: ";
	cin >> No_Of_Elements;

	Element* element; //dynamic
	element = new Element[No_Of_Elements];

	for (int i = 0; i < No_Of_Elements; i++) {
	
		cout << " => Enter the ID for element " << i + 1 << ": ";
		cin >> id;

		if (i % 2 == 0) {

			alpha = 1;
			beta = 0;
		}

		else {

			alpha = 0;
			beta = 1;
		}

		element[i].setVal(id,alpha,beta);
		element[i].setPointer();

	}
	cout << endl;
	cout << " => Alpha: " << element[0].getAlpha() << endl;
	cout << " => Beta:  " << element[0].getBeta() << endl << endl;
	cout << "--------------------------------------------------------------------------- " << endl << endl;

	for (int i = 0; i < No_Of_Elements; i++) {
	
		cout << " => Element# " << i + 1 << endl;
		cout << " => ID: " << element[i].getID() << endl;
		element[i].printPointerAddress(element[i]);
		cout << " => Size: " << element[i].getSize() << endl;

		cout << "--------------------------------------------------------------------------- " <<endl << endl << endl;
	}
	
	delete[] element;

	return 0;


}