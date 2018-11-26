#include "Student_Task3.h" 

Student::Student(char * aName, int anAge, char aGender, char * aProgram, int aStudyYear) : Program(aProgram), StudyYear(aStudyYear), Person(aName, anAge, aGender){ 
	if (aProgram != NULL) { 
		int len = strlen(aProgram) + 1; 
		Program = new char[len]; 
		strcpy_s(Program, len, aProgram); 
	} 
	else{ 
		Program = new char; 
		strcpy_s(Program, 1, "\0"); 
	} 
} 

void Student::study(){ 
	cout << getName() << " is studying." << endl; 
} 

void Student::heldExam(){ 
	cout << getName() << " is taking exam." << endl; 
} 

const char * Student::getProgram()const{ 
	return Program; 
} 

int Student::getStudyYear()const{ 
	return StudyYear; 
}