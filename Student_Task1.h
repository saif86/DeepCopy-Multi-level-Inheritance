#ifndef Student_HEADER_Task1
#define Student_HEADER_Task1
#include"Person_Task1.h" 

class Student :public Person { 
	char* Program; 
	int StudyYear; 
public: 
	Student(char* = NULL, int = 0, char = '\0', char* = NULL, int =0); 
	Student(const Student&); 
	~Student(); 
	Student& operator = (const Student&); 
	
	void study(); 
	void heldExam(); 
};

#endif