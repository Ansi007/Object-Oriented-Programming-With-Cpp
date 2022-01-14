#pragma once
#include<string>

using namespace std;

class StringFormatter
{

private:
	string Paragraph;
public:
	StringFormatter(string s);
	void printRightAligned(int);
	void printLeftAlgigned(int);

};

