#include "Person_Task3.h" 

Person::Person(char * aName, int anAge, char aGender) : Name(aName), Age(anAge), Gender(aGender){ 
	if (aName != NULL) { 
		int len = strlen(aName) + 1; 
		Name = new char[len]; 
		strcpy_s(Name, len, aName); 
	} 
	else{ 
		Name = new char; 
		strcpy_s(Name, 1, "\0"); 
	} 
} 

void Person::eat(){ 
	cout << Name << " is eating." << endl; 
} 

void Person::walk(){ 
	cout << Name << " is walking." << endl; 
} 

const char * Person::getName()const{ 
	return Name; 
} 

char Person::getGender()const{ 
	return Gender; 
}