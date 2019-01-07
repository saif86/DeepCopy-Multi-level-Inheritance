/**  PostgraduateStudent class inherited from Student class.
*
* #include "PostgraduateStudent_Task3.h" <BR>
* -llib
*
*/
#ifndef POSTGRAD_STUDENT_TASK3_H
#define POSTGRAD_STUDENT_TASK3_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Student_Task1.h"

// PostgraduateStudent class definition
class PostgraduateStudent : public Student {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	PostgraduateStudent(char* = NULL, int = 0, char = '/0', char* = NULL, char* = NULL, int = 0, int = 0);

	/** Copy constructor.
	*/
	PostgraduateStudent(const PostgraduateStudent&);

	/** assignment operator.
	*/
	PostgraduateStudent& operator =(const PostgraduateStudent&);

	// Use compiler-generated destructor.
	// ~PostgraduateStudent();


// OPERATIONS
	/** function that depicts teaching of PostgraduateStudent.
	*
	* @param void
	*
	* @return void
	*/
	void Teach();


	// ACCESS
	// setters
	void SetProgramLength(int = 0);
	void SetPostgraduateStudent(char* = NULL, int = 0, char = '/0', char* = NULL, int = 0, int = 0);
	/**
	# @overload void SetPostgraduateStudent(int = 0);
	*/
	void SetPostgraduateStudent(int = 0);
	/**
	# @overload void SetPostgraduateStudent(const PostgraduateStudent& aPostgraduateStudent);
	*/
	void SetPostgraduateStudent(const PostgraduateStudent& aPostgraduateStudent);

	// getters
	int GetProgramLength()const;
	const PostgraduateStudent& GetPostgraduateStudent()const;

private:

	// DATA MEMBERS
	int mProgramLength;
};
// end class PostgraduateStudent
#endif  
// _POSTGRAD_STUDENT_TASK3_H_
