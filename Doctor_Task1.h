/**  Doctor class inherited from Person class.
*
* #include "Doctor_Task1.h" <BR>
* -llib
*
*/
#ifndef DOCTOR_TASK1_H
#define DOCTOR_TASK1_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person_Task1.h"

// Doctor class definition
class Doctor : public Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Doctor(char* = NULL, int = 0, char = '/0', char* = NULL, int = 0);

	/** Copy constructor.
	*/
	Doctor(const Doctor&);

	/** assignment operator.
	*/
	Doctor& operator =(const Doctor&);

	// Use compiler-generated destructor.
	// ~Doctor();

// OPERATIONS
	/** function that depicts checking (patients) by Doctor.
	*
	* @param void
	*
	* @return void
	*/
	void CheckUp();

	/** function that depicts giving prescription by Doctor.
	*
	* @param void
	*
	* @return void
	*/
	void Prescribe();


// ACCESS
	// setters
	void SetSalary(int = 0);
	void SetDesignation(char* = "Doctor");
	void SetDoctor(char* = NULL, int = 0, char = '/0', int = 0);
	/**
	# @overload void SetDoctor(int = 0);
	*/
	void SetDoctor(int = 0);
	/**
	# @overload void SetDoctor(const Doctor& aDoctor);
	*/
	void SetDoctor(const Doctor& aDoctor);

	// getters
	int GetSalary()const;
	const Doctor& GetDoctor()const;

private:

// DATA MEMBERS
	int mSalary;
};
// end class Doctor
#endif  
// _DOCTOR_TASK1_H_
