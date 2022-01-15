//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include "TwoD_Transformation.h"

using namespace std;

int main() {

	Point Vector;	//Creating Point object
	double x, y; 

	cout << " => Give X: ";
	cin >> x;
	cout << " => Give Y: ";
	cin >> y;

	Vector.SetX(x);
	Vector.SetY(y);

	char flag ;	//for choice
	cout << " => What do you want to do?" << endl;
	cout << " => a) Scaling. " << endl;
	cout << " => b) Rotation. " << endl;
	cout << " => c) Shear. ";
	cin >> flag;

	TransformationMatrix Tranformed;		//Creating Transforming Object
	Tranformed.Transformation(&Vector, flag );		//Tranforming
	Vector.Display();		//Displaying

	return 0;

}