#ifndef Teacher_HEADER_Task1
#define Teacher_HEADER_Task1
#include"Person_Task1.h" 

class Teacher :public Person { 
	char* Designation; 
	int Salary; 
public: 
	Teacher(char* = NULL, int = 0, char = '\0', char* = NULL, int = 0); 
	Teacher(const Teacher&); ~Teacher(); 
	Teacher& operator = (const Teacher&); 
	
	void teach(); 
	void takeExam(); 
};

#endif