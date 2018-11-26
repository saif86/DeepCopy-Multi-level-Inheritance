#include "Teacher_Task3.h" 

Teacher::Teacher(char * aName, int anAge, char aGender, char * aDesignation, int aSalary) :Designation(aDesignation), Salary(aSalary), Person(aName, anAge, aGender){ 
	if (aDesignation != NULL) { 
		int len = strlen(aDesignation) + 1; 
		Designation = new char[len]; 
		strcpy_s(Designation, len, aDesignation); 
	} 
	else{ 
		Designation = new char; 
		strcpy_s(Designation, 1, "\0"); 
	} 
} 

void Teacher::teach(){ 
	cout << getName() << " is teaching." << endl; 
} 

void Teacher::takeExam(){ 
	cout << getName() << " is taking exam." << endl; 
}