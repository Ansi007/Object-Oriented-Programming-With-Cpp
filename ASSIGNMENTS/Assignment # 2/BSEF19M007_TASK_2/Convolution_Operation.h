//ANNS SHAHBAZ BSEF19M007
#pragma once
class mask;	//FWD DECLARATION
class image {
private:
	double** Image_Array;		//IMAGE
	int Size;		//image size
	static bool check;		//for destruction check

public:
	image();		//default constructor
	image(int);		//parameterized constructor
	~image();			//destructor
	void set(int, int, double);		//set function
	image performConvolution(mask, int );		//Convolution Function
	void Display();		//to display
	void Allow();		// to allow destruction
};


class mask {
private:	
	double** Mask_Array;		//mask
	int Size;		//mask size
	static bool Check;		//for destruction Check

public:
	mask();//default constructor
	~mask();	//destructor
	void set(int, int, double);	//set function
	double get(int, int);		//get values
	void Display();		//to display
	void Allow();	// to allow destruction

};

