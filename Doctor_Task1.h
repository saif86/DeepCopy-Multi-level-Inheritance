#ifndef Doctor_HEADER_Task1 
#define Doctor_HEADER_Task1 

#include"Person_Task1.h" 

class Doctor :public Person { 
	char* Designation; 
	int Salary; 
public: 
	Doctor(char* = NULL, int = 0, char = '\0', char* = NULL, int = 0); 
	Doctor(const Doctor&); 
	~Doctor(); 
	Doctor& operator = (const Doctor&); 
	void checkUp(); 
	void prescribe(); 
};

#endif