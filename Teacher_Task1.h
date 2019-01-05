/**  Teacher class inherited from Person class.
*
* #include "Teacher_Task1.h" <BR>
* -llib
*
*/
#ifndef TEACHER_TASK1_H
#define TEACHER_TASK1_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person_Task1.h"

// Teacher class definition
class Teacher : public Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Teacher(char* = NULL, int = 0, char = '/0', char* = NULL, int = 0);

	/** Copy constructor.
	*/
	Teacher(const Teacher&);

	/** assignment operator.
	*/
	Teacher& operator =(const Teacher&);

	// Use compiler-generated destructor.
	// ~Teacher();


// OPERATIONS
	/** function that depicts teaching of Teacher.
	*
	* @param void
	*
	* @return void
	*/
	void Teach();

	/** function that depicts taking exams by Teacher.
	*
	* @param void
	*
	* @return void
	*/
	void TakeExam();


// ACCESS
	// setters
	void SetSalary(int = 0);
	void SetDesignation(char* = "Teacher");
	void SetTeacher(char* = NULL, int = 0, char = '/0', int = 0);
	/**
	# @overload void SetTeacher(int = 0);
	*/
	void SetTeacher(int = 0);
	/**
	# @overload void SetTeacher(const Teacher& aTeacher);
	*/
	void SetTeacher(const Teacher& aTeacher);

	// getters
	int GetSalary()const;
	const Teacher& GetTeacher()const;

private:

// DATA MEMBERS
	int mSalary;
};
// end class Teacher
#endif  
// _TEACHER_TASK1_H_
