#ifndef Teacher_HEADER_Task3
#define Teacher_HEADER_Task3

#include "Person_Task3.h" 

class Teacher:public Person{ 
	char * Designation; 
	int Salary; 
public: 
	Teacher(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0); 
	void teach(); 
	void takeExam(); 
};

#endif