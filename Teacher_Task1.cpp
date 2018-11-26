#include "Teacher_Task1.h" 

Teacher::Teacher(char* aName, int anAge, char aGender, char* aDesignation, int aSalary) :Person(aName, anAge, aGender), Designation(aDesignation), Salary(aSalary) { 
	if (aDesignation != NULL) { 
		int len = strlen(aDesignation) + 1; 
		Designation = new char[len]; 
		strcpy_s(Designation, len, aDesignation); 
	} 
	else { 
		Designation = new char; 
		strcpy_s(Designation, 1, "\0"); 
	} 
} 

Teacher::Teacher(const Teacher& rhs) :Person(rhs) { 
	int len = strlen(rhs.Designation) + 1; 
	Designation = new char[len]; 
	strcpy_s(Designation, len, rhs.Designation); 
} 

Teacher::~Teacher() { 
	if (Designation){ 
		delete[] Designation; 
	} 
} 

Teacher& Teacher::operator = (const Teacher& rhs) { 
	Person::operator = (rhs); 
	int len = strlen(rhs.Designation) + 1; 
	Designation = new char[len]; 
	strcpy_s(Designation, len, rhs.Designation); 
	return *this; 
} 

void Teacher::teach() { 
	cout << getName() << " is teaching." << endl; 
} 

void Teacher::takeExam() { 
	cout << getName() << " is taking exam." << endl; 
}