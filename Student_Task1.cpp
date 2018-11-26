#include"Student_Task1.h" 
Student::Student(char* aName, int anAge, char aGender, char* aProgram, int aStudyYear) :Person(aName, anAge, aGender), Program(aProgram), StudyYear(aStudyYear) { 
	if (aProgram != NULL) { 
		int len = strlen(aProgram) + 1; 
		Program = new char[len]; 
		strcpy_s(Program, len, aProgram); 
	} 
	else { 
		Program = new char;
		strcpy_s(Program, 1, "\0"); 
	} 
} 

Student::Student(const Student& rhs) : Person(rhs) { 
	int len = strlen(rhs.Program) + 1; 
	Program = new char[len]; 
	strcpy_s(Program, len, rhs.Program); 
} 

Student::~Student() { 
	if (Program) { 
		delete[] Program; 
	} 
} 

Student& Student::operator = (const Student& rhs) { 
	Person::operator = (rhs); 
	int len = strlen(rhs.Program) + 1; 
	Program = new char[len]; 
	strcpy_s(Program, len, rhs.Program); 
	return *this; 
} 

void Student::study() { 
	cout << getName() << " is studying." << endl; 
} 

void Student::heldExam() { 
	cout << getName() << " is giving exam." << endl; 
}