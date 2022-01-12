//BSEF19M007 ANNS SHAHBAZ

#pragma once


class ArmyOfficers {
private:
	int id, rank;

public:

	ArmyOfficers();  //constructor
	ArmyOfficers(int, int);		//parameterized constructor
	void set(int id, int rank);		//setter
	int getID();		//getters
	int getRank();
	
};

