//ANNS SHAHBAZ BSEF19M007
#pragma once
class Matrix {
	friend void Help(int, int);	//Used for Num/Vec * Object

private:	//data members
	int** mat;	
	static int I, J;
	static bool check;

public:	//members functions
	Matrix();	//default constructor
	void SetMatrix(int,int,int);	//setter functions
	void Display();	//display function
	Matrix operator + (Matrix);//Overloaded + Operator 
	Matrix operator - (Matrix);//Overloaded - Operator 
	Matrix operator * (Matrix);//Overloaded * Operator 
	Matrix operator * (int);//Overloaded * Operator 
	operator int();//Overloaded Operator 
	Matrix operator * (int* );//Overloaded * Operator 
	bool operator > (Matrix); //Overloaded > Operator 
	bool operator < (Matrix);//Overloaded < Operator 
	bool operator >= (Matrix);//Overloaded >= Operator 
	bool operator <= (Matrix);//Overloaded <= Operator 
	bool operator == (Matrix);//Overloaded == Operator 
	Matrix operator ^ (int);//Overloaded ^ Operator 
	Matrix operator / (int);//Overloaded / Operator 
	void Destructor_Allowed();
	~Matrix();	//destructor

};

