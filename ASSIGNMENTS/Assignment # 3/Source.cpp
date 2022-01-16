//ANNS SHAHBAZ BSEF19M007
#include<iostream>
#include<ctime>

using namespace std;

/*	THERE WERE SOME LINKING ERRORS SO MAM ADVISED TO DO THE WORK IN SINGLE FILE*/	

class Student {	//STUDENT CLASS

private:
	int ID;		//PRIVATE DATA MEMBERS
	double CGPA;
public:
	Student();		//DEFAULT CONSTRUCTOR
	int getID();		//GET ID FUNCTION
	void setID(int);	//TO SET ID
	double getCGPA();		//TO GET CGPA
	void setCGPA(double);		//TO SET CGPA
	void PRINT();		//TO PRINT
	friend istream& operator >> (istream& , Student& );		//OVERLOADED >> OPERATOR
	friend ostream& operator << (ostream& , Student& );		//OVERLOADED << OPERATOR
};



Student::Student() {
	ID = 0;
	CGPA = 0;
}

int Student::getID() {
	return ID;
}

void Student::setID(int id) {
	ID = id;
}

double Student::getCGPA() {
	return CGPA;
}

void Student::setCGPA(double c) {
	CGPA = c;
}

void Student::PRINT() {
	cout << " => ID: " << ID << endl;
	cout << " => CGPA: " << CGPA << endl;
}

istream& operator >> (istream& in, Student& s) {

	cout << " =>ID: "; cin >> s.ID;
	cout << " =>CGPA:  "; cin >> s.CGPA;
	return in;

}

ostream& operator << (ostream& out, Student& s) {

	out << " => ID: " << s.ID << endl;
	out << " => CGPA: " << s.CGPA << endl;
	return out;

}


template<class TYPE>
class Node {	//NODE CLASS, REQUIRED FOR LINKED LIST CLASS
public:
	TYPE data;		
	Node* next, * before;		//NO NEED TO DEFAULT INITIALIZING IT TO NULL OR ANYTHING
};

template<class TYPE>
class Linked_List {			//LINKED LIST CLASS
private:
	Node<TYPE>* head, * tail;
public:
	Linked_List();			//DEFAULT CONSTRUCTOR
	void Add(TYPE n);		//ADDING ELEMENTS TO THE LIST
	void Delete(int);		//DELETE ELEMENT
	void Search(int);		//SEARCH ELEMENT
	void Shuffle(int);		//SHUFFLE RANDOMLY
	void PrintLinkedList();		//PRINT LIST
};

template<class TYPE>
Linked_List<TYPE>::Linked_List() {

	head = NULL;
	tail = NULL;

}

template<class TYPE>
void Linked_List<TYPE>::Add(TYPE n) {

	Node<TYPE>* temperory = new Node<TYPE>;		//TEMPORARY NODE FOR ADDING
	temperory->data = n;
	temperory->next = NULL;
	temperory->before = NULL;

	if (head == NULL) {				//IF FIRST ELEMENT

		head = temperory;
		tail = temperory;
	
	}

	else {		//IF NOT FIRST ELEMENT

		temperory->before = tail;		//ADDING THE ELEMENT 
		tail->next = temperory;		//SETTING BEFORE AND AFTER POINTERS
		tail = tail->next;


	}


	Node<TYPE>* Start = new Node<TYPE>;		//SORTING THE LIST SIDE BY SIDE, THIS IS STARTER
	Node<TYPE>* Shifter = new Node<TYPE>;		//THIS IS THE ONE WHO WILL BE SHIFTED
	Node<TYPE>* Iterator = new Node<TYPE>;		//FOR ITERATION
	Student Holder;		//TO HOLD AN ELEMENT FOR A WHILE

	Shifter = head;		//STARTING FROM HEAD
	Iterator = head;

	while (Iterator != NULL) {		//WHILE NOT END

		Shifter = head;		

		while (Shifter != NULL) {		

			Start = Iterator;		//MOVING ONE NODE AFTER EVERY CYCLE

			if (Start->data.getID() < Shifter->data.getID()) {		//SORTING

				Holder = Start->data;	//HOLDING
				Start->data = Shifter->data;		//SHIFTING
				Shifter->data = Holder;		//RETRIEVING

			}

			else {
				Shifter = Shifter->next;
			}
		}

		Iterator = Iterator->next;		//MOVING ONE NODE AFTER EVERY CYCLE

	}

}

template<class TYPE>
void Linked_List<TYPE>::Delete(int no) {

	Node<TYPE>* Start = new Node<TYPE>;			//START
	Node<TYPE>* Deleter = new Node<TYPE>;		//DELETER
	Start = head;		//STARTING FROM HEAD

	for (int i = 1; i < no; i++) {		//MOVING TO THE GIVEN NODE NO
		Deleter = Start;			//DELETING
		Start = Start->next;
	}

	Deleter->next = Start->next;		//ADJUSTING THE NODES

}


template<class TYPE>
void Linked_List<TYPE>::Search(int id) {

	Node<TYPE>* print = new Node<TYPE>;		//PRINTER
	print = head;		//STARTING FROM THE HEAD

	while (print != NULL) {		//WHILE NOT END
		if (print->data.getID() == id) {		//IF THE GIVEN ID IS FOUND
			cout << "=> Element Found: " << endl;
			print->data.PRINT();		//PRINT THAT ELEMENT
			cout << "------------------------------------------" << endl;
			break;
		}
		else
			print = print->next;		//ELSE KEEP ON GOING 
	}



}


template<class TYPE>
void Linked_List<TYPE>::Shuffle(int size) {

	//SIMILAR AS SORTING WITH FEW CHANGES
	Node<TYPE>* Start = new Node<TYPE>;		//STARTER
	Node<TYPE>* Shifter = new Node<TYPE>;		//SHIFTER
	Node<TYPE>* Iterator = new Node<TYPE>;		//ITERATOR
	Student Holder;		//HOLDER

	Shifter = head;			//STARTING FROM HEAD
	Iterator = head;

	while (Iterator != NULL) {		// WHILE NOT END

		Start = Iterator;	//MOVE ONE NODE EVERY CYCLE
		Shifter = head;	

		int randomNumber;		//GENEAROTING A RANDOM NO
		srand((unsigned)time(0));
		randomNumber = (rand() % (size));		//RANGE ACCORDING THE SIZE OF ARRAY


		for (int i = 0; i < randomNumber; i++) {
			Shifter = Shifter->next;		//SHIFTER GOES TO THAT NODE (DEPENDING ON THE RANDOM NO)
		}

		Holder = Start->data;			//SHIFT THE DATA
		Start->data = Shifter->data;
		Shifter->data = Holder;

		Iterator = Iterator->next;		//MOVE TO THE NEXT NODE
	}




}

template<class TYPE>
void Linked_List<TYPE>::PrintLinkedList() {

	Node<TYPE>* print = new Node<TYPE>;		//PRINTER
	print = head;		//STARTING FROM HEAD

	for (int i = 0; print != NULL; i++) {		//UNTIL THE END IS REACHED

		cout << " => At Position: " << i << endl;	//POSITION NO
		cout << " => Before:" << print->before << endl;		//BEFORE
		cout << " => Next:" << print->next << endl;			//AFTER
		print->data.PRINT();			//DATA
		print = print->next;		//MOVE TO THE NEXT
		cout << endl;


	}

}



int main() {

	Student* S;		//DYNAMIC ARRAY
	Linked_List<Student> a;			//LINKED LIST
	int size = 0;		//SIZE OF ARRAY

	while (size <= 6) {		//SHOULD BE GREATER THA SIX
		cout << " => Give the size of array (Should be greater than 6): ";
		cin >> size;
	}

	S = new Student[size];		//CREATING THE ARRAY

	for (int i = 0; i < size; i++) {
		cin >> S[i];		//TAKING INPUT
		cout << endl;
	}

	
	for (int i = 0; i < size; i++) {
		a.Add(S[i]);		//ADDING THEM ONE BY ONE INTO THE LINKED LIST
	}

	cout << "=> PRINTING THE SORTED LINKED LIST." << endl;		//PRINTING THE LIST AFTER ADDING
	cout << "--------------------------------------" << endl << endl;
	a.PrintLinkedList();
	cout << "--------------------------------------" << endl;
	cout << "=> DELETING THE FOURTH ELEMENT FROM SORTED LINKED LIST AND PRINTING LIST." << endl;
	a.Delete(4);		//DELETE FUNCTION
	--size;		//AS ALWAYS 4 WILL BE DELETED THE SIZE OF ARRAY IS DECREASED BY ONE ALWAYS
	a.PrintLinkedList();		//PRINTING AFTER DELETION
	cout << "--------------------------------------" << endl;
	cout << "=> SEARCHING THE ORIGINAL FOURTH OBJECT THE SORTED LINKED LIST" << endl;
	a.Search(S[3].getID());		//SEARCHING THE ELEMENT
	cout << "=> PRINTING THE LINKED LIST." << endl;
	a.PrintLinkedList();		//PRINTING THE LIST
	cout << "--------------------------------------" << endl;
	cout << "=> PRINTING THE LINKED LIST BEFORE SHUFFLE." << endl << endl;
	a.PrintLinkedList();		//PRINING BEFORE SHUFFLE
	cout << "--------------------------------------" << endl;
	a.Shuffle(size);		//SHUFFLING
	cout << "=> PRINTING THE LINKED LIST AFTER SHUFFLE." << endl;
	a.PrintLinkedList();	//PRINTING AFTER SHUFFLE
	cout << "--------------------------------------" << endl;


	return 0;
}