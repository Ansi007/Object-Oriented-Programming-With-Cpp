//BSEF19M007 ANNS SHAHBAZ
#pragma once
#include <string>
using namespace std;


class Employee { //Employee class

protected:	//data members
	int ID;
	string name;
	string designation;
public:		//member functions
	Employee(); //constructor
	void setEmployee();		//to set employee details
	void Display();		//to display them
};

class Salary : public Employee{
		
protected:		//data members
	double basic_pay, human_resource;
	double dearness_allowance, fund;
	double net_pay;
public:		//memebers functions
	Salary();	//constructor
	void getEmployeeDetails();  //setting emplyee details
	void Display(); //to display them

};

class BankCredit : public Salary {

private:	//data members
	string bank_name;   
	int account_number;

public://memebers functions	
	BankCredit();		//constructor
	void getBankDetails();	//setting details
	void Print();	//printing them

};