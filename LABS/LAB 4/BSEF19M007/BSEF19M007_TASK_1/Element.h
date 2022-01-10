//ANNS SHAHBAZ BSEF19M007
#pragma once
class Element
{
private: //data members
	int ID;
	static int size;
	int* pointer;
	static int Alpha;
	static int Beta;


public: //member functions
	Element(); //default constructor
	void setVal(int, int, int); //to Set ID,Alpha & beta
	void setPointer(); //to set pointer
	static int getSize(); //to get size		
	int getID(); //to get ID
	int *getAlpha(); //to get Alpha Address
	int *getBeta(); //to get Beta Address
	void printPointerAddress(Element ); //to print pointer address

};






