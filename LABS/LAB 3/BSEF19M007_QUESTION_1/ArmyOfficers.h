// ANNS SHAHBAZ BSEF19M007
#pragma once
class ArmyOfficers
{
private: //defining data members
	int id, rank;

public:

	ArmyOfficers(); //default constructor
	ArmyOfficers(int ,int); //parameterized constructor
	void set(int , int ); //to set values
	int getID() const; //to get ID
	int getRank() const; // to get RANK
	ArmyOfficers getHighestRank(ArmyOfficers ); // to get highest rank officer

};

