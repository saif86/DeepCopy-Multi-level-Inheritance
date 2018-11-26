#include "PostgraduateStudent_Task3.h"

PostgraduateStudent::PostgraduateStudent(char * aName, int anAge, char aGender, char * aProgram, int aStudyYear, int aProgramLength) : ProgramLength(aProgramLength), Student(aName, anAge, aGender, aProgram, aStudyYear) { } 

void PostgraduateStudent::teach() { 
	cout << getName() << " is teaching." << endl; 
} 

int PostgraduateStudent::getProgramLength()const { 
	return ProgramLength; 
}