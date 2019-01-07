#include "Doctor_Task1.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Doctor Default+Overloaded Constructor
Doctor::Doctor(char* aName, int aAge, char aGender, char* aDesignation, int aSalary) : Person(aName, aAge, aGender, aDesignation), mSalary(aSalary) {
	this->SetDoctor(aSalary);
	this->SetDesignation(aDesignation);
}
// end Doctor constructor

// Doctor Copy Constructor
Doctor::Doctor(const Doctor& rhs) : Person(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.mDesignation), mSalary(rhs.GetSalary()) {
	this->SetDoctor(rhs.GetSalary());
	this->SetDesignation(rhs.mDesignation);
}
// end Doctor constructor

// Doctor assignment operator.
Doctor& Doctor:: operator =(const Doctor& rhs) {
	this->SetDoctor(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.GetSalary());
	this->SetDesignation(rhs.mDesignation);
	return *this;
}
// end Doctor assignment operator.


//============================= OPERATIONS ===================================
// function that depicts checking (patients) by Doctor.
void Doctor::CheckUp() {
	cout << this->GetName() << " is checking up." << endl;
}
// end function CheckUp

// function that depicts giving prescription by Doctor.
void Doctor::Prescribe() {
	cout << this->GetName() << " is giving prescribtion." << endl;
}
// end function Prescribe


//============================= ACESS      ===================================

// function that sets salary of Teacher
void Doctor::SetSalary(int aSalary) {
	if (aSalary < 0)
		cout << "Error: Salary cannot be nagative." << endl;
	else
		this->mSalary = aSalary;
}
// end function SetSalary

// Pure virtual function that sets designation in (Parent)Person class
void Doctor::SetDesignation(char* aDesignation) {
	// freeing the previously alloted memory
	if (this->mDesignation)
		delete[] this->mDesignation;
	// reserving new memory space for updated designation
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
// end function SetDesignation

// function that sets Doctor
void Doctor::SetDoctor(char* aName, int aAge, char aGender, int aSalary) {
	this->SetPerson(aName, aAge, aGender);
	this->SetDoctor(aSalary);
}
// end function SetDoctor

// overloaded function that sets the Doctor
void Doctor::SetDoctor(int aSalary) {
	this->SetSalary(aSalary);
}
// end function SetDoctor

// overloaded function that sets the Doctor
void Doctor::SetDoctor(const Doctor& aDoctor) {
	this->SetPerson(aDoctor.GetPerson());
	this->SetDoctor(aDoctor.GetSalary());
}
// end function SetDoctor

// function that gets salary of Doctor
int Doctor::GetSalary()const {
	return this->mSalary;
}
// end function GetSalary

// function that gets the Doctor
const Doctor& Doctor::GetDoctor()const {
	return *this;
}
// end function GetDoctor
