#ifndef PostgraduateStudent_HEADER
#define PostgraduateStudent_HEADER 

#include "Student_Task3.h" 

class PostgraduateStudent :public Student { 
	int ProgramLength; 
public: 
	PostgraduateStudent(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0, int = 0); 
	void teach(); 
	int getProgramLength()const; 
};

#endif