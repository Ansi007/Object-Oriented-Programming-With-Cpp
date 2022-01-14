#include "StringFormatter.h"
#include<string>
#include <iostream>
using namespace std;

StringFormatter::StringFormatter(string s) {

	Paragraph = s;

}

void StringFormatter::printLeftAlgigned(int n) {


	cout << " => Left Aligned: (No more than 25 characters per line)" << endl << endl;

	char* s;
	s = new char[n]; //creating array to help in aligning

	int i = 0; //for iteration
	int line_length = 0; //to calculate length of a line
	int word_length = 0; //to calculate word length
	int a = 0; //for iteration
	int firstloop = 0; //for iteration of Array


	while (1) {


		word_length = 0;


		if (Paragraph[i] == '\0')  //to check if we are at the end of string & to overcome the warning issue
			break;


		for (; line_length < n; ) { 
			++word_length;
			s[firstloop] = Paragraph[i]; 
			i++;

			

			if (s[firstloop++] == ' ' || Paragraph[i] == '\0') //breaking after one word is read
				break;

		}

		if (line_length + word_length >= n) { //checking if a line is completed that is if no more words can be printed in this line

			
			i = i - word_length;
			cout << endl;
			line_length = 0;
			firstloop = 0;

		}


		else {

			line_length = line_length + word_length; //calculating line length


			for (a = line_length - word_length; a < line_length; a++) {

				cout << s[a]; //displaying word by word

			}


		}

	}

	cout << endl;
	cout << endl;
}

void StringFormatter::printRightAligned(int n) {


	cout << " => Right Aligned.  (No more than 25 characters per line + Assumming the Display length is of 40 characters)" << endl << endl;

	char* s;
	s = new char[n]; //creating array to help in aligning

	int i = 0; //for iteration
	int line_length = 0; //to calculate length of a line
	int word_length = 0; //to calculate word length
	int a = 0; //for iteration
	int firstloop = 0; //for iteration of Array


	
	while (1) {


		word_length = 0;



		for (; line_length < n; ) {  //putting string into array line by line 
			++word_length;
			s[firstloop] = Paragraph[i];
			i++;



			if (s[firstloop++] == ' ' || Paragraph[i] == '\0') //breaking after a word is read
				break;

		}

		if (line_length + word_length >= n) { //checking if a line is completed that is if no more words can be printed in this line

			i = i - word_length;
			cout << endl;

			for (int space = 0; space < 41 - line_length; space++) //putting left spaces to align right
				cout << " ";

			for (int q = 0; q < line_length; q++) //displaying the whole line
				cout << s[q];

			line_length = 0;
			firstloop = 0;


		}


		else {

			line_length = line_length + word_length; //calculating the line length


		}


		if (Paragraph[i] == '\0') { //to check if we are at the end of string & to overcome the warning issue

			cout << endl;
			for (int space = 0; space < 40 - line_length; space++) //putting spaces before the last line
				cout << " ";

			for (int q = 0; q < line_length; q++) //printing the last line
				cout << s[q];

			break;
		}
		


	}
}