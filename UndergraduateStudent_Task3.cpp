#include "UndergraduateStudent_Task3.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// UndergraduateStudent Default+Overloaded Constructor
UndergraduateStudent::UndergraduateStudent(char* aName, int aAge, char aGender, char* aDesignation, char* aProgram, int aStudyYear, int aProgramLength) : Student(aName, aAge, aGender, aDesignation, aProgram, aStudyYear), mProgramLength(aProgramLength) {
	this->SetUndergraduateStudent(aProgramLength);
}
// end UndergraduateStudent constructor 

// UndergraduateStudent Copy Constructor
UndergraduateStudent::UndergraduateStudent(const UndergraduateStudent& rhs) : Student(rhs.GetStudent()), mProgramLength(rhs.GetProgramLength()) {
	this->SetUndergraduateStudent(rhs.GetProgramLength());
}
// end UndergraduateStudent constructor

// UndergraduateStudent assignment operator.
UndergraduateStudent& UndergraduateStudent::operator =(const UndergraduateStudent& rhs) {
	this->SetUndergraduateStudent(rhs.GetUndergraduateStudent());
	return *this;
}
// end UndergraduateStudent assignment operator.


//============================= OPERATIONS ===================================
// function that depicts playing of UndergraduateStudent.
void UndergraduateStudent::Play() {
	cout << this->GetName() << " is playing." << endl;
}
// end function Play



//============================= ACESS      ===================================

// function that sets program length of UndergraduateStudent
void UndergraduateStudent::SetProgramLength(int aProgramLength) {
	if (aProgramLength >= 0  && aProgramLength <= 4)
		this->mProgramLength = aProgramLength;
	else 
		cout << "Error: Program length out of range." << endl;
}
// end function SetProgramLength


// function that sets UndergraduateStudent
void UndergraduateStudent::SetUndergraduateStudent(char* aName, int aAge, char aGender, char* aProgram, int aStudyYear, int aProgramLength) {
	this->SetStudent(aName, aAge, aGender, aProgram, aStudyYear);
	this->SetUndergraduateStudent(aProgramLength);
}
// end function SetUndergraduateStudent

// overloaded function that sets the UndergraduateStudent
void UndergraduateStudent::SetUndergraduateStudent(int aProgramLength) {
	this->SetProgramLength(aProgramLength);
}
// end function SetUndergraduateStudent

// overloaded function that sets the UndergraduateStudent
void UndergraduateStudent::SetUndergraduateStudent(const UndergraduateStudent& aUndergraduateStudent) {
	this->SetStudent(aUndergraduateStudent.GetStudent());
	this->SetUndergraduateStudent(aUndergraduateStudent.GetProgramLength());
}
// end function SetUndergraduateStudent


// function that gets program length of UndergraduateStudent
int UndergraduateStudent::GetProgramLength()const {
	return this->mProgramLength;
}
// end function GetProgramLength

// function that gets the UndergraduateStudent
const UndergraduateStudent& UndergraduateStudent::GetUndergraduateStudent()const {
	return *this;
}
// end function GetUndergraduateStudent
