/**  Line class inherited from Shape class.
*
* #include "Line_Task2.h" <BR>
* -llib
*
*/
#ifndef LINE_TASK2_H
#define LINE_TASK2_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape_Task2.h"

// Line class definition
class Line : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Line(char* = "white", int = 0, float = 0.0);
	
	/** Copy constructor.
	*/
	Line(const Line&);

	/** assignment operator.
	*/
	Line& operator =(const Line&);

	// Use compiler-generated destructor.
	// ~Line();


// OPERATIONS
	/** Pure virtual function that draws Line.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();


// ACCESS
	// setters
	void SetLength(float = 0.0);
	void SetLine(char* = "white", int = 0, float = 0.0);
	/**
	# @overload void SetLine(float = 0.0);
	*/
	void SetLine(float = 0.0);
	/**
	# @overload void SetLine(const Line& aLine);
	*/
	void SetLine(const Line& aLine);

	// getters
	float GetLength()const;
	const Line& GetLine()const;

private:

// DATA MEMBERS
	float mLength;
};
// end class Line
#endif  
// _LINE_TASK2_H_
