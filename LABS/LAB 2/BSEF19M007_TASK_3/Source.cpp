#include<iostream>
using namespace std;

class Job { //declaring class

private: // data members
	int deadline;

public:
	Job() { //default constructor

		deadline = 0;

	}

	Job(double d) { //parameterized constructor

		deadline = d;

	}

	double getDeadline(); //to get the Deadline
	
	//No setter included beacuse no need of a setter in the program
	


};



double Job::getDeadline() { //defining member function

	return deadline;
}

int main() {

	Job job1(12), job2(1), job3(11), job4(45), job5(6), job6(9), job7(66), job8(5), job9(27), job10(34);
	int i = 0; //for iteration
	double min,min_index; //for min values
	double second_min,second_min_index; //for second min values
	double JobArray[10]; //double Array to make the code easier

	//filling Array with deadlines
	
	JobArray[i++] = job1.getDeadline();
	JobArray[i++] = job2.getDeadline();
	JobArray[i++] = job3.getDeadline();
	JobArray[i++] = job4.getDeadline();
	JobArray[i++] = job5.getDeadline();
	JobArray[i++] = job6.getDeadline();
	JobArray[i++] = job7.getDeadline();
	JobArray[i++] = job8.getDeadline();
	JobArray[i++] = job9.getDeadline();
	JobArray[i] = job10.getDeadline();

	i = 1; //for iteration
	
	for (int j = 0; j < 10; j++)
		cout << " => Job " << i++ << " has deadline of " << JobArray[j] << endl; //display deadlines

/*
		Similar to
		
cout<< " => Job 1 has deadline of " << job1.getDealine()<<endl;
.
.
.
cout<< " => Job 10 has deadline of " << job10.getDealine()<<endl;



*/

	//finding earliest deadline

	min = JobArray[0];

	for (int k = 0; k < 10; k++) {

		if (min > JobArray[k]) {
			min = JobArray[k];
			min_index = k;
		}
	}

	//finding second most earliest deadlines
	
	second_min = JobArray[0];

	for (int k = 0; k < 10; k++) {
		if (second_min > JobArray[k] && k != min_index) {
			second_min = JobArray[k];
			second_min_index = k;
		}
	}

	cout << " => Job " << ++min_index << " has earliest and job " << ++second_min_index << " has the second most earliest deadline. " << endl; 


	return 0;

}


