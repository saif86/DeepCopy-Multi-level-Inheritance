#include "Teacher_Task1.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Teacher Default+Overloaded Constructor
Teacher::Teacher(char* aName, int aAge, char aGender, char* aDesignation, int aSalary) : Person(aName, aAge, aGender, aDesignation), mSalary(aSalary) {
	this->SetTeacher(aSalary);
	this->SetDesignation(aDesignation);
}
// end Teacher constructor 

// Teacher Copy Constructor
Teacher::Teacher(const Teacher& rhs) : Person(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.mDesignation), mSalary(rhs.GetSalary()) {
	this->SetTeacher(rhs.GetSalary());
	this->SetDesignation(rhs.mDesignation);
}
// end Teacher constructor

// Teacher assignment operator.
Teacher& Teacher:: operator =(const Teacher& rhs) {
	this->SetTeacher(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.GetSalary());
	this->SetDesignation(rhs.mDesignation);
	return *this;
}
// end Teacher assignment operator.


//============================= OPERATIONS ===================================
// function that depicts teaching of Teacher.
void Teacher::Teach() {
	cout << this->GetName() << " is teaching." << endl;
}
// end function Teach

// function that depicts taking exams by Teacher.
void Teacher::TakeExam() {
	cout << this->GetName() << " is taking exam." << endl;
}
// end function TakeExam


//============================= ACESS      ===================================

// function that sets salary of Teacher
void Teacher::SetSalary(int aSalary) {
	if (aSalary < 0)
		cout << "Error: Salary cannot be nagative." << endl;
	else
		this->mSalary = aSalary;
}
// end function SetSalary

// Pure virtual function that sets designation in (Parent)Person class
void Teacher::SetDesignation(char* aDesignation) {
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

// function that sets Teacher
void Teacher::SetTeacher(char* aName, int aAge, char aGender, int aSalary) {
	this->SetPerson(aName, aAge, aGender);
	this->SetTeacher(aSalary);
}
// end function SetTeacher

// overloaded function that sets the Teacher
void Teacher::SetTeacher(int aSalary) {
	this->SetSalary(aSalary);
}
// end function SetTeacher

// overloaded function that sets the Teacher
void Teacher::SetTeacher(const Teacher& aTeacher) {
	this->SetPerson(aTeacher.GetPerson());
	this->SetTeacher(aTeacher.GetSalary());
}
// end function SetTeacher

// function that gets salary of Teacher
int Teacher::GetSalary()const {
	return this->mSalary;
}
// end function GetSalary

// function that gets the Teacher
const Teacher& Teacher::GetTeacher()const {
	return *this;
}
// end function GetTeacher
