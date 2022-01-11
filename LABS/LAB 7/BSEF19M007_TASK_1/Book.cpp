//BSEF19M007 ANNS SHAHBAZ
#include "Book.h"
#include <string>
#include<iostream>

using namespace std;



Book::Book() { //DEFAULT CONSTRUCTOR

	title = "";
	author = "";

}

void Book::show() { //DISPLAY FUNCTION

	cout << "=> The name of the Book is: " << title << endl;
	cout << "=> The name of the AUTHOR of the Book is: " << author << endl;
}

void Book::setTitle(string tit) { //SET TITLE
	title = tit;
}

void Book::setAuthor(string auth) {
	author =auth;
}

Fiction::Fiction() {
	level = 0;
}

void Fiction::show() {
	Book::show();
	cout << "=> The level of the book is: " << level << endl;
}

void Fiction::setLevel(int l, string tit, string auth) {

	level = l;
	Book::setTitle(tit);		//INVOKING BOOK CLASS FUNCTIONS
	Book::setAuthor(auth);

}

Non_Fiction::Non_Fiction() {
	no_of_pages = 0;
}

void Non_Fiction::show() {
	Book::show();
	cout << "=> The number of pages are: " << no_of_pages << endl;
}

void Non_Fiction::setPages(int p, string tit, string auth) {

	no_of_pages = p;
	Book::setTitle(tit);	//INVOKING BOOK CLASS FUNCTION
	Book::setAuthor(auth);

}
