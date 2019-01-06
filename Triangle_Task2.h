/**  Triangle class inherited from Shape class.
*
* #include "Triangle_Task2.h" <BR>
* -llib
*
*/
#ifndef TRIANGLE_TASK2_H
#define TRIANGLE_TASK2_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape_Task2.h"

// Triangle class definition
class Triangle : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Triangle(char* = "white", int = 0, float = 0.0);

	/** Copy constructor.
	*/
	Triangle(const Triangle&);

	/** assignment operator.
	*/
	Triangle& operator =(const Triangle&);

	// Use compiler-generated destructor.
	// ~Triangle();


// OPERATIONS
	/** Pure virtual function that draws Triangle.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();

	/** function that computes area of Triangle.
	*
	* @param void
	*
	* @return void
	*/
	void ComputeArea();


// ACCESS
	// setters
	void SetAngle(float = 0.0);
	void SetTriangle(char* = "white", int = 0, float = 0.0);
	/**
	# @overload void SetTriangle(float = 0.0);
	*/
	void SetTriangle(float = 0.0);
	/**
	# @overload void SetTriangle(const Triangle& aTriangle);
	*/
	void SetTriangle(const Triangle& aTriangle);

	// getters
	float GetAngle()const;
	const Triangle& GetTriangle()const;

private:

	// DATA MEMBERS
	float mAngle;
};
// end class Triangle
#endif  
// _TRIANGLE_TASK2_H_
