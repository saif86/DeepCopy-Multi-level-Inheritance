#ifndef Student_HEADER
#define Student_HEADER 

#include "Person_Task3.h" 

class Student:public Person{ 
	char * Program; 
	int StudyYear; 
public: 
	Student(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0); 
	void study(); 
	void heldExam(); 
	const char * getProgram()const; 
	int getStudyYear()const; 
}; 

#endif