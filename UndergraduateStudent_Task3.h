#ifndef UndergraduateStudent_HEADER
#define UndergraduateStudent_HEADER 

#include "Student_Task3.h"

class UndergraduateStudent :public Student { 
	int ProgramLength; 
public: 
	UndergraduateStudent(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0, int = 0); 
	void play(); 
	int getProgramLength()const; 
};

#endif