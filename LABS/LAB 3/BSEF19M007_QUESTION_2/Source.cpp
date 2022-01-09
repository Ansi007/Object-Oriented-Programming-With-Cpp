// ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "Bag20.h"
using namespace std;

int main() {


	Bag20 Bag1, Bag2; 
	int element = 0;

	cout << " => Enter the elements for two bags " << endl;
	while (Bag1.GetSize() != 20) //loop for input
	{
		cout << " => Enter the value to insert in bag 1 : ";
		cin >> element;
		if (element == -1)
			break;
		Bag1.insert(element);

	}

	cout << " ------------------------------------------------------------------------------ " << endl;

	while (Bag2.GetSize() != 20) //loop for input
	{
		cout << " => Enter the value to insert in bag 2 : ";
		cin >> element;
		if (element == -1)
			break;
		Bag2.insert(element);

	}

	cout << " ------------------------------------------------------------------------------ " << endl;

	cout << " => Contents of bag 1: ";
	Bag1.show();

	cout << " => Contents of bag 2: ";
	Bag2.show();


	cout << " ------------------------------------------------------------------------------ " << endl;


	int IndexLook = 0;
	cout << " => Enter the index at which value should be found in bag 1 array: ";
	cin >> IndexLook;
	cout << " => Value at Index " << IndexLook << " : " << Bag1.elemenAt(IndexLook) << endl;


	cout << " ------------------------------------------------------------------------------ " << endl;

	int ValueLook = 0;
	cout << " => Enter the element whose frequency should be found in bag 1 array: ";
	cin >> ValueLook;
	cout << " => Frequency of " << ValueLook << " : " << Bag1.findFrequency(ValueLook) << endl;

	cout << " ------------------------------------------------------------------------------ " << endl;

	int ElementRemoved = 0;
	cout << " => Enter the element which should be removed from bag 1 array: ";
	cin >> ElementRemoved;
	Bag1.Delete(ElementRemoved);

	cout << " => Contents of bag 1: ";
	Bag1.show();

	cout << " ------------------------------------------------------------------------------ " << endl;

	Bag20 Bag3;

	Bag3 = Bag1.Union(Bag2);

	cout << " => Union of bag 1 and bag 2 (bag 3): ";
	Bag3.show();

	cout << " ------------------------------------------------------------------------------ " << endl;

	cout << " => Equilibrium index of bag 3: " << Bag3.findEquilibriumIndex(Bag3) << endl;

	cout << " ------------------------------------------------------------------------------ " << endl;

	int RotatingFactor = 0;
	cout << " => Enter the factor by which to rotate bag 3: ";
	cin >> RotatingFactor;
	Bag3 = Bag1.leftRotate(Bag3, RotatingFactor);


	Bag20 Bag4;
	Bag4 = Bag1.Merge(Bag3); //Using Merge Fucntion Made to Help putting Bag1 & Bag3 in Bag4 with respect to even and odd indexes


	cout << " => Contents of bag 1: ";
	Bag1.show();

	cout << " => Contents of bag 3: ";
	Bag3.show();

	cout << " => Contents of bag 4: ";
	Bag4.show();


	cout << " ------------------------------------------------------------------------------ " << endl;

	
	return 0;

}
