//BSEF19M007 ANNS SHAHBAZ
#include<iostream>
#include<fstream>
#include "ArmyOfficers.h"

int Ranking[10];		//global ranking array

using namespace std;

void findHighRanks(ArmyOfficers* PointingSoldiers);	//to find highest rank

int main() {
	
	ArmyOfficers Soldiers[10];	//creating objects
	int ID = 0, RANK = 0;		//for inputs

	fstream f;
	f.open("ArmyOfficers.dat", ios::out | ios::binary);

	if(f.fail()) {		// if file not opened
		cout << "=> File not opened. " << endl;
	}

	else {

		for (int i = 0; i < 10; i++) {
			
			cout << "=> Give ID of the officer: ";
			cin >> ID;

			cout << "=> Give RANK of the officer: ";
			cin >> RANK;

			Soldiers[i].set(ID, RANK);	//setting id and rank
			

			f.write((char*)&Soldiers[i], sizeof(Soldiers[i]));	//writing object into files

			}
	}

	f.close();		//closing file
	
	findHighRanks(Soldiers);		//finding highest rank

	return 0;
}

void findHighRanks(ArmyOfficers* PointingSoldiers) {

	fstream f;
	f.open("ArmyOfficers.dat", ios::in | ios::binary);
	int ID;
	int RANK;

	if (f.fail()) {
		cout << "=> File not opened. " << endl;
	}

	else {

		for (int i = 0; i < 10; i++) {

			f.read((char*)&PointingSoldiers[i], sizeof(PointingSoldiers[i]));	//reading from file


			for (int j = 0; j < i + 1; j++) {

				for (int k = 0; k < i + 1; k++) {

					//sorting objects

					if (PointingSoldiers[j].getRank() < PointingSoldiers[k].getRank()) {

						ID = PointingSoldiers[j].getID();
						RANK = PointingSoldiers[j].getRank();

						PointingSoldiers[j].set(PointingSoldiers[k].getID(), PointingSoldiers[k].getRank());
						PointingSoldiers[k].set(ID, RANK);


					}
				}
			}

		}
	}


	f.close();

	//displaying sorted

	for (int i = 0; i < 10; i++) {

		Ranking[i] = PointingSoldiers[i].getID();
		cout << " => ID: " << Ranking[i] << endl;
		cout << " => RANK: " << PointingSoldiers[i].getRank() << endl;
	}



}
