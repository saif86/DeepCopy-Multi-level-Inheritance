#ifndef Person_HEADER_Task1 
#define Person_HEADER_Task1 

#include <iostream> 
using namespace std; 

class Person { 
	char* Name; 
	int Age; 
	char Gender; 
public: 
	Person(char* = NULL, int = 0, char = '\0'); 
	Person(const Person&); 
	~Person(); 
	Person& operator = (const Person&); 
	
	void eat(); 
	void walk(); 
	
	const char * getName()const; 
}; 

#endif