/**  UndergraduateStudent class inherited from Student class.
*
* #include "UndergraduateStudent_Task3.h" <BR>
* -llib
*
*/
#ifndef UNDERGRAD_STUDENT_TASK3_H
#define UNDERGRAD_STUDENT_TASK3_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Student_Task1.h"

// UndergraduateStudent class definition
class UndergraduateStudent : public Student {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	UndergraduateStudent(char* = NULL, int = 0, char = '/0', char* = NULL, char* = NULL, int = 0, int = 0);

	/** Copy constructor.
	*/
	UndergraduateStudent(const UndergraduateStudent&);

	/** assignment operator.
	*/
	UndergraduateStudent& operator =(const UndergraduateStudent&);

	// Use compiler-generated destructor.
	// ~UndergraduateStudent();


	// OPERATIONS
	/** function that depicts playing of UndergraduateStudent.
	*
	* @param void
	*
	* @return void
	*/
	void Play();


// ACCESS
	// setters
	void SetProgramLength(int = 0);
	void SetUndergraduateStudent(char* = NULL, int = 0, char = '/0', char* = NULL, int = 0, int = 0);
	/**
	# @overload void SetUndergraduateStudent(int = 0);
	*/
	void SetUndergraduateStudent(int = 0);
	/**
	# @overload void SetUndergraduateStudent(const UndergraduateStudent& aUndergraduateStudent);
	*/
	void SetUndergraduateStudent(const UndergraduateStudent& aUndergraduateStudent);

	// getters
	int GetProgramLength()const;
	const UndergraduateStudent& GetUndergraduateStudent()const;

private:

	// DATA MEMBERS
	int mProgramLength;
};
// end class UndergraduateStudent
#endif  
// _UNDERGRAD_STUDENT_TASK3_H_
