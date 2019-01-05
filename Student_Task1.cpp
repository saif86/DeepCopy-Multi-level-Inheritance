#include "Student_Task1.h"  // class implemented
#include<cstring>  // prototypes for strcmp
#include<string.h>

using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Student Default+Overloaded Constructor
Student::Student(char* aName, int aAge, char aGender, char* aDesignation, char* aProgram, int aStudyYear) : Person(aName, aAge, aGender, aDesignation), mStudyYear(aStudyYear) {
	this->SetStudent(aStudyYear, aProgram);
	this->SetDesignation(aDesignation);
}
// end Student constructor 

// Student Copy Constructor
Student::Student(const Student& rhs) : Person(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.mDesignation), mStudyYear(rhs.GetStudyYear()) {
	this->SetStudent(rhs.GetStudyYear(), rhs.GetProgram());
	this->SetDesignation(rhs.mDesignation);
}
// end Student constructor

// Student Destructor
Student::~Student() {
	if (this->mProgram)
		delete[] this->mProgram;
}
// end Student Destructor

// Student assignment operator.
Student& Student:: operator =(const Student& rhs) {
	this->SetStudent(rhs.GetName(), rhs.GetAge(), rhs.GetGender(), rhs.GetProgram(), rhs.GetStudyYear());
	this->SetDesignation(rhs.mDesignation);
	return *this;
}
// end Student assignment operator.


//============================= OPERATIONS ===================================
// function that depicts study of Student.
void Student::Study() {
	cout << this->GetName() << " is studying." << endl;
}
// end function Study

// function that depicts exams of Student.
void Student::HeldExam() {
	cout << this->GetName() << " is taking exam." << endl;
}
// end function HeldExam


//============================= ACESS      ===================================

// function that sets program of Student
void Student::SetProgram(char* aProgram) {
	// freeing the previously alloted memory
	if (this->mProgram)
		delete[] this->mProgram;
	// reserving new memory space for updated program
	if (aProgram != NULL) {
		int len = strlen(aProgram) + 1;
		this->mProgram = new char[len];
		strcpy_s(this->mProgram, len, aProgram);
	}
	else {
		this->mProgram = new char;
		strcpy_s(this->mProgram, 1, "\0");
	}
}
// end function SetProgram

// function that sets study year of Student
void Student::SetStudyYear(int aStudyYear) {
	if (aStudyYear > 1980 && aStudyYear<2025)
		this->mStudyYear = aStudyYear;
	else {
		this->mStudyYear = 0;
		cout << "Error: Study year out of range." << endl;
	}
}
// end function SetStudyYear

// Pure virtual function that sets designation in (Parent)Person class
void Student::SetDesignation(char* aDesignation) {
	if (aDesignation == NULL);
	else if (!(strcmp(aDesignation, "student")==0 || strcmp(aDesignation, "Student") == 0))
		cout << "Invalid designation entered. Setting it to Student." << endl;
	// freeing the previously alloted memory
	if (this->mDesignation)
		delete[] this->mDesignation;
	// reserving new memory space for updated designation
	int len = strlen("Student") + 1;
	this->mDesignation = new char[len];
	strcpy_s(this->mDesignation, len, "Student");
}
// end function SetDesignation

// function that sets Student
void Student::SetStudent(char* aName, int aAge, char aGender, char* aProgram, int aStudyYear) {
	this->SetPerson(aName, aAge, aGender);
	this->SetStudent(aStudyYear, aProgram);
}
// end function SetStudent

// overloaded function that sets the Student
void Student::SetStudent(int aStudyYear, char* aProgram) {
	this->SetProgram(aProgram);
	this->SetStudyYear(aStudyYear);
}
// end function SetStudent

// overloaded function that sets the Student
void Student::SetStudent(const Student& aStudent) {
	this->SetStudent(aStudent.GetName(), aStudent.GetAge(), aStudent.GetGender(), aStudent.GetProgram(), aStudent.GetStudyYear());
}
// end function SetStudent

// function that gets program of Student
char* Student::GetProgram()const {
	return this->mProgram;
}
// end function GetProgram

// function that gets stufy year of Student
int Student::GetStudyYear()const {
	return this->mStudyYear;
}
// end function GetStudyYear

// function that gets the Student
const Student& Student::GetStudent()const {
	return *this;
}
// end function GetStudent
