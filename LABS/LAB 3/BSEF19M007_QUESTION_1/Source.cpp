//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "ArmyOfficers.h"

using namespace std;

int main() {

	ArmyOfficers officer1, officer2(10, 4);
	int id, rank;

	cout << " => ID of army officer (hardcoded): " << officer2.getID() << endl;
	cout << " => Rank (hardcoded): " << officer2.getRank() << endl;

	cout << " => Enter the ID of army officer: ";
	cin >> id;
	cout << " => Enter the rank: ";
	cin >> rank;
	officer1.set(id, rank);

	cout << "-------------------------------------------------------------------------" << endl;
	ArmyOfficers HighestRank; //Declaring another to not disturb the other objects
	HighestRank = officer1.getHighestRank(officer2);

	if (HighestRank.getID() != -1) //If -1 then no need to display ID as both ranks are same. 
		cout << " => ID of highest ranked officer: " << HighestRank.getID() << endl;
	cout << " => Rank: " << HighestRank.getRank() << endl;

	return 0;

}
