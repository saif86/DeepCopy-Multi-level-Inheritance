#include "Person_Task1.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Person Default+Overloaded Constructor
Person::Person(char* aName, int aAge, char aGender, char* aDesignation) : mAge(aAge), mGender(aGender), mDesignation(aDesignation) {
	this->SetPerson(aName, aAge, aGender);
	// reserving memory space for a designation
	if (aDesignation != NULL) {
		int len = strlen(aDesignation) + 1;
		this->mDesignation = new char[len];
		strcpy_s(this->mDesignation, len, aDesignation);
	}
	else {
		this->mDesignation = new char;
		strcpy_s(this->mDesignation, 1, "\0");
	}
}
// end Person constructor 

// Person Copy Constructor
Person::Person(const Person& rhs) : mAge(rhs.GetAge()), mGender(rhs.GetGender()), mDesignation(rhs.mDesignation) {
	this->SetPerson(rhs.GetName(), rhs.GetAge(), rhs.GetGender());

	int len = strlen(rhs.mDesignation) + 1;
	this->mDesignation = new char[len];
	strcpy_s(this->mDesignation, len, rhs.mDesignation);
}
// end Person constructor

// Person Destructor
Person::~Person() {
	// freeing the alloted memory
	if (this->mName) 
		delete[] this->mName;
	if (this->mDesignation)
		delete[] this->mDesignation;
}
// end Person Destructor

// Person assignment operator.
Person& Person:: operator =(const Person& rhs) {
	this->SetPerson(rhs.GetName(), rhs.GetAge(), rhs.GetGender());

	// freeing the previously alloted memory
	if (this->mDesignation)
		delete[] this->mDesignation;
	// reserving new memory space for updated designation
	int len = strlen(rhs.mDesignation) + 1;
	this->mDesignation = new char[len];
	strcpy_s(this->mDesignation, len, rhs.mDesignation);
	return *this;
}
// end Person assignment operator.


//============================= OPERATIONS ===================================
// function that depicts eating of Person.
void Person::Eat() {
	cout << this->GetName() << " is eating." << endl;
}
// end function Eat

// function that depicts walking of Person.
void Person::Walk() {
	cout << this->GetName() << " is walking." << endl;
}
// end function Walk


//============================= ACESS      ===================================

// function that sets Name of Person
void Person::SetName(char* aName) {
	// freeing the previously alloted memory
	if (mName)
		delete [] mName;

	// reserving new memory space for updated name
	if (aName != NULL) {
		int len = strlen(aName) + 1;
		this->mName = new char[len];
		strcpy_s(this->mName, len, aName);
	}
	else {
		this->mName = new char;
		strcpy_s(this->mName, 1, "\0");
	}
}
// end function SetName

// function that sets age of Person
void Person::SetAge(int aAge) {
	if (aAge < 0 || aAge>130) 
		cout << "Error: Age out of range." << endl;
	else
		this->mAge = aAge;
}
// end function SetAge

// function that sets gender of Person
void Person::SetGender(char aGender) {
	if (aGender == 'M' || aGender == 'm' || aGender == 'F' || aGender == 'f')
		this->mGender = aGender;
	else {
		cout << "Error: Gender is not recognized." << endl;
		this->mGender = 'X';
	}
}
// end function SetGender

// function that sets Person
void Person::SetPerson(char* aName, int aAge, char aGender) {
	this->SetName(aName);
	this->SetAge(aAge);
	this->SetGender(aGender);
}
// end function SetPerson

// function that sets the Person
void Person::SetPerson(const Person &obj) {
	this->SetPerson(obj.GetName(), obj.GetAge(), obj.GetGender());
}
// end function SetPerson

// function that gets Fist Name of Person
char* Person::GetName() const {
	return (this->mName);
}
// end function GetName

// function that gets age of Person
int Person::GetAge() const {
	return this->mAge;
}
// end function GetAge

// function that gets gender of Person
char Person::GetGender() const {
	return this->mGender;
}
// end function GetGender

// function that gets the Person
const Person& Person::GetPerson()const {
	return *this;
}
// end function GetPerson
