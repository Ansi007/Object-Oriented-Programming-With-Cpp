#include<iostream>
#include<string>

#include "StringFormatter.h"

using namespace std;

int main() {

	//Creating object
	StringFormatter String1("The world is indeed full of peril and in it there are many dark places.But still there is much that is fair.And though in all lands, love is now mingled with grief, it still grows, perhaps, the greater.");

	cout << " => Input string: " << endl << endl;
	cout << "The world is indeed full of peril and in it there are many dark places.But still there is much that is fair.And though in all lands, love is now mingled with grief, it still grows, perhaps, the greater." << endl << endl;
	cout << "------------------------------------------------------------------------------" << endl << endl;

	
	String1.printLeftAlgigned(25); //Alligning left
	cout << "------------------------------------------------------------------------------" << endl << endl;
	String1.printRightAligned(25);	//Alligning right
	cout << "\n\n------------------------------------------------------------------------------" << endl << endl;


	return 0;
}
