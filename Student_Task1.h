/**  Student class inherited from Person class.
*
* #include "Student_Task1.h" <BR>
* -llib
*
*/
#ifndef STUDENT_TASK1_H
#define STUDENT_TASK1_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person_Task1.h"

// Student class definition
class Student : public Person {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Student(char* = NULL, int = 0, char = '/0', char* = NULL, char* = NULL, int = 0);

	/** Copy constructor.
	*/
	Student(const Student&);

	/** Destructor.
	*/
	~Student();

	/** assignment operator.
	*/
	Student& operator =(const Student&);


// OPERATIONS
	/** function that depicts study of Student.
	*
	* @param void
	*
	* @return void
	*/
	void Study();

	/** function that depicts exams of Student.
	*
	* @param void
	*
	* @return void
	*/
	void HeldExam();

	
// ACCESS
	// setters
	void SetProgram(char* = NULL);
	void SetStudyYear(int = 0);
	void SetDesignation(char* = "Student");
	void SetStudent(char* = NULL, int = 0, char = '/0', char* = NULL, int = 0);
	/**
	# @overload void SetStudent(int = 0, char* = NULL);
	*/
	void SetStudent(int = 0, char* = NULL);
	/**
	# @overload void SetStudent(const Student& aStudent);
	*/
	void SetStudent(const Student& aStudent);

	// getters
	char* GetProgram()const;
	int GetStudyYear()const;
	const Student& GetStudent()const;

private:

// DATA MEMBERS
	char* mProgram;
	int mStudyYear;
};
// end class Student
#endif  
// _STUDENT_TASK1_H_
