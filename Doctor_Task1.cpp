#include "Doctor_Task1.h" 

Doctor::Doctor(char* aName, int anAge, char aGender, char* aDesignation, int aSalary) :Person(aName, anAge, aGender), Designation(aDesignation), Salary(aSalary) { 
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

Doctor::Doctor(const Doctor& rhs) :Person(rhs) { 
	int len = strlen(rhs.Designation) + 1; 
	Designation = new char[len]; 
	strcpy_s(Designation, len, rhs.Designation); 
} 

Doctor::~Doctor() { 
	if (Designation){ 
		delete[] Designation; 
	} 
} 

Doctor& Doctor::operator = (const Doctor& rhs) { 
	Person::operator = (rhs); 
	int len = strlen(rhs.Designation) + 1; 
	Designation = new char[len]; 
	strcpy_s(Designation, len, rhs.Designation); 
	return *this; 
} 

void Doctor::checkUp() {
	cout << getName() << " is checking up." << endl; 
} 

void Doctor::prescribe() { 
	cout << getName() << " is giving prescribtion." << endl; 
}