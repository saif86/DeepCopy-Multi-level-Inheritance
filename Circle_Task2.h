/**  Circle class inherited from Shape class.
*
* #include "Circle_Task2.h" <BR>
* -llib
*
*/
#ifndef CIRCLE_TASK2_H
#define CIRCLE_TASK2_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape_Task2.h"

// Circle class definition
class Circle : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Circle(char* = "white", int = 0, float = 0.0);

	/** Copy constructor.
	*/
	Circle(const Circle&);

	/** assignment operator.
	*/
	Circle& operator =(const Circle&);

	// Use compiler-generated destructor.
	// ~Circle();


// OPERATIONS
	/** Pure virtual function that draws Circle.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();

	/** function that computes area of Circle.
	*
	* @param void
	*
	* @return Area of circle
	*/
	float ComputeArea();


// ACCESS
	// setters
	void SetRadius(float = 0.0);
	void SetCircle(char* = "white", int = 0, float = 0.0);
	/**
	# @overload void SetCircle(float = 0.0);
	*/
	void SetCircle(float = 0.0);
	/**
	# @overload void SetCircle(const Circle& aCircle);
	*/
	void SetCircle(const Circle& aCircle);

	// getters
	float GetRadius()const;
	const Circle& GetCircle()const;

private:

	// DATA MEMBERS
	float mRadius;
};
// end class Circle
#endif  
// _CIRCLE_TASK2_H_
