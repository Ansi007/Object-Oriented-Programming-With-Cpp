//BSEF19M007 ANNS SHAHBAZ

#include<iostream>
#include<fstream>
#include "ArmyOfficers.h"

using namespace std;

ArmyOfficers::ArmyOfficers() { 

	this->id = 0;
	this->rank = 0;

}

ArmyOfficers::ArmyOfficers(int ID, int RANK) {

	
	id = ID;
	rank = RANK;

}

void ArmyOfficers::set(int id, int rank) {
	this->id = id;
	this->rank = rank;
}

int ArmyOfficers::getID() {
	return id;
}

int ArmyOfficers::getRank() {
	return rank;
}
