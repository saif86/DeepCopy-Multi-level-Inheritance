#ifndef Person_HEADER_Task3
#define Person_HEADER_Task3 

#include <iostream> 
using namespace std; 

class Person{ 
	char * Name; 
	int Age; 
	char Gender; 
public: 
	Person(char * = NULL, int = 0, char = '\0'); 
	void eat(); 
	void walk(); 

	const char * getName()const; 
	char getGender()const; 
}; 

#endif