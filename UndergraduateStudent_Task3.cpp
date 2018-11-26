#include "UndergraduateStudent_Task3.h" 

UndergraduateStudent::UndergraduateStudent(char * aName, int anAge, char aGender, char * aProgram, int aStudyYear, int aProgramLength) : ProgramLength(aProgramLength), Student(aName, anAge, aGender, aProgram, aStudyYear) { } 

void UndergraduateStudent::play(){ 
	cout << getName() << " is playing." << endl; 
} 

int UndergraduateStudent::getProgramLength()const{ 
	return ProgramLength; 
}