#include "PostgraduateStudent_Task3.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// PostgraduateStudent Default+Overloaded Constructor
PostgraduateStudent::PostgraduateStudent(char* aName, int aAge, char aGender, char* aDesignation, char* aProgram, int aStudyYear, int aProgramLength) : Student(aName, aAge, aGender, aDesignation, aProgram, aStudyYear), mProgramLength(aProgramLength) {
	this->SetPostgraduateStudent(aProgramLength);
}
// end PostgraduateStudent constructor 

// PostgraduateStudent Copy Constructor
PostgraduateStudent::PostgraduateStudent(const PostgraduateStudent& rhs) : Student(rhs.GetStudent()), mProgramLength(rhs.GetProgramLength()) {
	this->SetPostgraduateStudent(rhs.GetProgramLength());
}
// end PostgraduateStudent constructor

// PostgraduateStudent assignment operator.
PostgraduateStudent& PostgraduateStudent::operator =(const PostgraduateStudent& rhs) {
	this->SetPostgraduateStudent(rhs.GetPostgraduateStudent());
	return *this;
}
// end PostgraduateStudent assignment operator.


//============================= OPERATIONS ===================================
// function that depicts teaching of PostgraduateStudent.
void PostgraduateStudent::Teach() {
	cout << this->GetName() << " is teaching." << endl;
}
// end function Teach



//============================= ACESS      ===================================

// function that sets program length of PostgraduateStudent
void PostgraduateStudent::SetProgramLength(int aProgramLength) {
	if (aProgramLength >= 0 && aProgramLength <= 4)
		this->mProgramLength = aProgramLength;
	else
		cout << "Error: Program length out of range." << endl;
}
// end function SetProgramLength


// function that sets PostgraduateStudent
void PostgraduateStudent::SetPostgraduateStudent(char* aName, int aAge, char aGender, char* aProgram, int aStudyYear, int aProgramLength) {
	this->SetStudent(aName, aAge, aGender, aProgram, aStudyYear);
	this->SetPostgraduateStudent(aProgramLength);
}
// end function SetPostgraduateStudent

// overloaded function that sets the PostgraduateStudent
void PostgraduateStudent::SetPostgraduateStudent(int aProgramLength) {
	this->SetProgramLength(aProgramLength);
}
// end function SetPostgraduateStudent

// overloaded function that sets the PostgraduateStudent
void PostgraduateStudent::SetPostgraduateStudent(const PostgraduateStudent& aPostgraduateStudent) {
	this->SetStudent(aPostgraduateStudent.GetStudent());
	this->SetPostgraduateStudent(aPostgraduateStudent.GetProgramLength());
}
// end function SetPostgraduateStudent


// function that gets program length of PostgraduateStudent
int PostgraduateStudent::GetProgramLength()const {
	return this->mProgramLength;
}
// end function GetProgramLength

// function that gets the PostgraduateStudent
const PostgraduateStudent& PostgraduateStudent::GetPostgraduateStudent()const {
	return *this;
}
// end function GetPostgraduateStudent
