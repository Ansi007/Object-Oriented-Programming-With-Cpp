//BSEF19M007 ANNS SHAHBAZ
#include<iostream>
#include "Employee.h"

using namespace std;

Employee::Employee() {

	ID = 0;
	name = "";
	designation = "";

}

void Employee::setEmployee() {

	cout << "=> Give the Name of the Employee: ";
	getline(cin,name);	//getting input

	cout << "=> Give the ID of the Employee: ";
	cin >> ID;

	cout << "=> Give the Designation of the Employee: ";
	cin.ignore();
	getline(cin,designation);


}

void Employee::Display() {	//displaying

	cout << "=> Name of the Employee: " << name << endl;

	cout << "=> ID of the Employee: " << ID << endl;

	cout << "=> Designation of the Employee: " << designation << endl;;


}

Salary::Salary() {	//constructing

	basic_pay = 0.0;
	human_resource = 0.0;
	dearness_allowance = 0.0; 
	fund = 0.0;
	net_pay = 0.0;

}

void Salary::getEmployeeDetails() {

	Employee::setEmployee(); //invoking Employee class function
	//taking input
	cout << "=> Give the Basic Pay: ";
	cin >> basic_pay;

	cout << "=> Give the Human Resource: ";
	cin >> human_resource;

	cout << "=> Give the Dearness Allowance: ";
	cin >> dearness_allowance;

	cout << "=> Give the Profitability Fund: ";
	cin >> fund;

	net_pay = basic_pay + human_resource + dearness_allowance - fund;	//finding net pay

}


void Salary::Display() {
	Employee::Display();	//invoking employee class function

	cout << "=> Basic Pay: " << basic_pay << endl;

	cout << "=> Human Resource: " << human_resource << endl;;

	cout << "=> Dearness Allowance: " << dearness_allowance << endl;

	cout << "=> Profitability Fund: " << fund << endl;

	cout << "=> Net Pay: " << net_pay << endl;



}

BankCredit::BankCredit() {

	bank_name = "";
	account_number = 0;

}


void BankCredit::getBankDetails() {
	Salary::getEmployeeDetails();	//invoking salary class function

	cout << "=> Give the name of the Bank: ";
	cin.ignore();
	getline(cin, bank_name);

	cout << "=> Give the Account Number: ";
	cin >> account_number;
	cin.ignore();

}

void BankCredit::Print() {
	Salary::Display();		//invoking salary class function
		
	cout << "=> The name of the Bank is: " << bank_name << endl;

	cout << "=> The Account Number: " << account_number << endl;

}
