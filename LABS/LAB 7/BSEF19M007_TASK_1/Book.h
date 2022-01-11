//BSEF19M007 ANNS SHAHBAZ
#pragma once
#include <string>
using namespace std;

//BOOK CLASS
class Book {

	//PROTECETED DATA MEMBERSS
protected:
	string title;
	string author;
public:	//MEMBERS FUCNTIONS
	Book();
	void show();		//TO SHOW
	void setTitle(string);	//TO SET TITLE
	void setAuthor(string);	//TO SET AUTHOR
};

class Fiction : public Book { //INHERITED FROM BOOK
	//PRIVATE DATA MEMBER
private:
	int level;
	//MEMBER FUNCTIONS
public:
	Fiction();
	void show(); 
	void setLevel(int, string, string); //SETTER



};


class Non_Fiction : public Book { //INHERTIED FROM BOOK

private:
	int no_of_pages;

public:
	Non_Fiction();
	void show();
	void setPages(int, string, string); //SETTER



};