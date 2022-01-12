//BSEF19M007 ANNS SHAHBAZ

#pragma once
#include<string>
using namespace std;



class ShippingContainer {		//BASE CLASS
private:
	int ID;
public:
	ShippingContainer();		//CONSTRUCTOR
	void setID(int);		//SETTER
	int getID();		//GETTER
	virtual string getManifest();		//TO GET MANIFEST
	virtual	void setManifest(string);	//TO SET MANIFEST
	virtual void add(int,int, string);		//TO ADD LIST
	virtual string getList();		//TO GET LIST

};


class ManualShippingContainer : public ShippingContainer {

private:
	string Manifest;

public:
	ManualShippingContainer();		//CONSTRUCTOR
	void setManifest(string);		//TO SET MANIFEST
	string getManifest();		//TO GET MANIFEST

};

class RFIDShippingContainer : public ShippingContainer {

private:
	static string Storing;		//FOR LIST
	string Manifest;		

public:
	RFIDShippingContainer();		//CONSTRUCTOR
	void add(int,int, string);		//FOR ADDING LIST
	string getManifest();		//TO GET MANI FEST
	string getList();			// TO GET THE LIST
};