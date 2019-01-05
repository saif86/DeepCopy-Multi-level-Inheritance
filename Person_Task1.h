/**  Person class to define persons in a C++ code.
*
* #include "Person_Task1.h" <BR>
* -llib
*
*/
#ifndef PERSON_TASK1_H
#define PERSON_TASK1_H

// SYSTEM INCLUDES
#include<iostream>


// Person class definition
class Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Person(char* = NULL, int = 0, char = '/0', char* = NULL);

	/** Copy constructor.
	*/
	Person(const Person&);

	/** Destructor.
	*/
	~Person();

	/** assignment operator.
	*/
	Person& operator =(const Person&);

	

// OPERATIONS
	/** function that depicts eating of Person.
	*
	* @param void
	*
	* @return void
	*/
	void Eat();

	/** function that depicts walking of Person.
	*
	* @param void
	*
	* @return void
	*/
	void Walk();

// ACCESS
	// setters
	void SetName(char* = NULL);
	void SetAge(int = 0);
	void SetGender(char = '/0');
	virtual void SetDesignation(char* = NULL) = 0;
	void SetPerson(char* = NULL, int = 0, char = '/0');
	/**
	# @overload void SetPerson(const Person& aPerson);
	*/
	void SetPerson(const Person& aPerson);

	// getters
	char* GetName() const;
	int GetAge() const;
	char GetGender() const;
	const Person& GetPerson()const;

// DATA MEMBERS
protected:
	char* mDesignation;

private:
	char* mName;
	int mAge;
	char mGender;
};
// end class Person
#endif  
// _PERSON_TASK1_H_
