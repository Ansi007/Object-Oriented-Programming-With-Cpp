//ANNS SHAHBAZ BSEF19M007
#pragma once
class Point {
	
private:	//data members
	double* point; 
public:
	Point();	//default constructor
	Point(double, double);	//parameterized constructor
	~Point();	//destructor
	double GetX();		//To GetX
	double GetY();		//To GetY
	void SetX(double);	//To SetX
	void SetY(double);	//To SetY
	void Display();		//To display

};


class TransformationMatrix {

private:		//data members
	double **Scaling; //Scaling Matrix
	double **Rotation;	//Rotating Matrix
	double **Shear;	//Shearing Matrix
public:		
	TransformationMatrix();	//default constructor
	~TransformationMatrix();		//destructor
	void Transformation(Point *,char );		//To Transform

};