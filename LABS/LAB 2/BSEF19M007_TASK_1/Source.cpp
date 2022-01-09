#include<iostream>
using namespace std;

class Team {

private: //data members
	int SCORE; 
	int WICKETS;

public:
	
	Team(){ //default constructor
		SCORE = 0;
		WICKETS = 10;
	}


	Team(int score, int wickets) { //parameterized constructor
		SCORE = score;
		WICKETS = wickets;
	}

	//declaration of member functions
	
	void SetScore(int );
	void SetWickets(int);
	int GetScore();
	int GetWickets();

};

//definitions of member functions

void Team::SetScore(int score) { //to set the score

	SCORE = score;

}


void Team::SetWickets(int wickets) { //to set the wickets

	WICKETS = wickets;

}

int Team::GetScore() { //to get the score

	return SCORE;

}


int Team::GetWickets() { //to get the wickets

	return WICKETS;

}

int main() {
	cout << " => ********************** PART A **********************" << endl; //partA_start
	Team t1, t2;   //objects declared
	int score,wickets;

	cout << " => Enter data for Team1. " << endl;
	cout << " => Enter score : ";
	cin >> score; //Input Score
	t1.SetScore(score); //Setting Score
	cout << " => Enter the number of wickets : ";
	cin >> wickets; //Input Wickets
	t1.SetWickets(wickets); //Setting Wickets
	cout << " => Team 1 has score : " << t1.GetScore() << " and number of wickets : " << t1.GetWickets() << endl;

	cout << endl << endl;

	cout << " => Enter data for Team2. " << endl;
	cout << " => Enter score : ";
	cin >> score;
	t2.SetScore(score);
	cout << " => Enter the number of wickets : ";
	cin >> wickets;
	t2.SetWickets(wickets);
	cout << " => Team 2 has score : " << t2.GetScore() << " and number of wickets : " << t2.GetWickets() << endl << endl;

	//partA_end


	cout << " => ********************** PART B **********************" << endl;//partB_start


	Team t3; //Object initialized with default constructor
	cout << " => Team3 created (default)" << endl;
	cout << " => Team 3 has score : " << t3.GetScore() << " and number of wickets : " << t3.GetWickets() << endl;

	cout << endl;

	Team t4(11, 2); //Object initialized with parameterized constructor

	cout << " => Team4 created (parameterized) " << endl;
	cout << " => Team 4 has score : " << t4.GetScore() << " and number of wickets : " << t4.GetWickets() << endl << endl;


	//partB_end

	cout << " => ********************** PART C **********************" << endl; //partC_start

	t1.SetScore(24); //setting scores
	t2.SetScore(12);
	t3.SetScore(120);
	t4.SetScore(11);

	t1.SetWickets(4); //setting wickets
	t2.SetWickets(9);
	t3.SetWickets(3);
	t4.SetWickets(7);

	//displaying
	cout << " => Team 1 has score : " << t1.GetScore() << " and number of wickets : " << t1.GetWickets() << endl;
	cout << " => Team 2 has score : " << t2.GetScore() << " and number of wickets : " << t2.GetWickets() << endl;
	cout << " => Team 3 has score : " << t3.GetScore() << " and number of wickets : " << t3.GetWickets() << endl;
	cout << " => Team 4 has score : " << t4.GetScore() << " and number of wickets : " << t4.GetWickets() << endl;
	cout << endl << endl;

	//using if to check the particular conditions
	
	if (t1.GetScore() == t2.GetScore() && t1.GetScore() == t3.GetScore() && t1.GetScore() == t4.GetScore())
		cout << " => All teams have equal scores." << endl;

	//using if to check the particular conditions

	else {
	
		if (t1.GetScore() >= t2.GetScore() && t1.GetScore() >= t3.GetScore() && t1.GetScore() >= t4.GetScore())
			cout << " => Team 1 has maximum score." << endl;

		if (t2.GetScore() >= t1.GetScore() && t2.GetScore() >= t3.GetScore() && t2.GetScore() >= t4.GetScore())
			cout << " => Team 2 has maximum score." << endl;


		if (t3.GetScore() >= t1.GetScore() && t3.GetScore() >= t2.GetScore() && t3.GetScore() >= t4.GetScore())
			cout << " => Team 3 has maximum score." << endl;


		if (t4.GetScore() >= t1.GetScore() && t4.GetScore() >= t2.GetScore() && t4.GetScore() >= t3.GetScore())
			cout << " => Team 4 has maximum score." << endl;

		if (t1.GetScore() <= t2.GetScore() && t1.GetScore() <= t3.GetScore() && t1.GetScore() <= t4.GetScore())
			cout << " => Team 1 has minimum score." << endl;

		if (t2.GetScore() <= t1.GetScore() && t2.GetScore() <= t3.GetScore() && t2.GetScore() <= t4.GetScore())
			cout << " => Team 2 has minimum score." << endl;


		if (t3.GetScore() <= t1.GetScore() && t3.GetScore() <= t2.GetScore() && t3.GetScore() <= t4.GetScore())
			cout << " => Team 3 has minimum score." << endl;


		if (t4.GetScore() <= t1.GetScore() && t4.GetScore() <= t2.GetScore() && t4.GetScore() <= t3.GetScore())
			cout << " => Team 4 has minimum score." << endl;

		if (t1.GetWickets() > 6)
			cout << " => Team 1 has wickets greater than 6." << endl;


		if (t2.GetWickets() > 6)
			cout << " => Team 2 has wickets greater than 6." << endl;


		if (t3.GetWickets() > 6)
			cout << " => Team 3 has wickets greater than 6." << endl;


		if (t4.GetWickets() > 6)
			cout << " => Team 4 has wickets greater than 6." << endl;
			
	}
	
	//partC_end

	return 0;

}
