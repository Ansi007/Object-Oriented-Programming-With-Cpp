// ANNS SHAHBAZ BSEF19M007
#pragma once
class Bag20
{			//defining class

private:	//defining data members
	int Bag[20];
	int current_size;

public: 	//defining Member Functions

	Bag20();	//default Contstructor
	void insert(int );	//to insert values
	int GetSize();	//to get array size
	void SetSize(int );	//to set array size
	void show();	// to display values
	int elemenAt(int ); //to look for element
	int findFrequency(int); //to find frequency
	void Delete (int); //to delete element
	Bag20 Union(Bag20 ); //to get union
	int findEquilibriumIndex(Bag20); //to find equillibrium index
	Bag20 leftRotate(Bag20 , int); //to left rotate
	Bag20 Merge(Bag20 ); // New function made to merge bag1 & bag3 at even and odd indexes respectively

};

