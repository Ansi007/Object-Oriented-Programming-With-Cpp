// ANNS SHAHBAZ BSEF19M007
#include "ArmyOfficers.h"
#include<iostream>
//declaring Class ArmyOfficers Functions

ArmyOfficers::ArmyOfficers() {

	id = 0;
	rank = 0;
}

ArmyOfficers::ArmyOfficers(int ID, int RANK) {

	id = ID;
	rank = RANK;
}

void ArmyOfficers::set(int ID, int RANK) {

	id = ID;
	rank = RANK;

}


int ArmyOfficers::getID() const {

	return id;

}

int ArmyOfficers::getRank() const {

	return rank;

}

ArmyOfficers ArmyOfficers::getHighestRank(ArmyOfficers a ) {

	ArmyOfficers Check;

	if (rank > a.getRank()) {
		Check.rank = rank;
		Check.id = id;
	}

	else if (rank == a.getRank()){
	
		std::cout << " => Both ranks equal" << std::endl;
		Check.rank = rank;
		Check.id = -1; // "-1" Because both are same so No Comparison Occured
	}

	else {
		Check.rank = a.getRank();
		Check.id = a.getID();
	}

	return Check;
}




