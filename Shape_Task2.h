/**  Shape class to define shapes in a C++ code.
*
* #include "Shape_Task2.h" <BR>
* -llib
*
*/
#ifndef SHAPE_TASK2_H
#define SHAPE_TASK2_H

// SYSTEM INCLUDES
#include<iostream>


// Shape class definition
class Shape {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Shape(char* = "white", int = 0);


	/** Copy constructor.
	*/
	Shape(const Shape&);

	/** Destructor.
	*/
	~Shape();

	/** assignment operator.
	*/
	Shape& operator =(const Shape&);

// OPERATIONS
	/** Pure virtual function that depicts drawing of Shape.
	*
	* @param void
	*
	* @return void
	*/
	virtual void Draw() = 0;

	/** function that depicts rotation of Shape.
	*
	* @param void
	*
	* @return void
	*/
	void Rotate();

	// ACCESS
	// setters
	void SetColor(char* = "white");
	void SetCoord(int = 0);
	void SetShape(char* = "white", int = 0);
	/**
	# @overload void SetShape(const Shape& aShape);
	*/
	void SetShape(const Shape& aShape);

	// getters
	char*  GetColor() const;
	int GetCoord() const;
	const Shape& GetShape()const;

private:

	// DATA MEMBERS
	char* mColor;
	int mCoord;
};
// end class Shape
#endif  
// _SHAPE_TASK2_H_
