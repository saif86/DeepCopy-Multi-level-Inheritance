#include "Shape_Task2.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Shape Default+Overloaded Constructor
Shape::Shape(char* aColor, int aCoord) : mCoord(aCoord) {
	this->SetShape(aColor, aCoord);
}
// end Shape constructor 

// Shape Copy Constructor
Shape::Shape(const Shape& rhs) : mCoord(rhs.GetCoord()) {
	this->SetShape(rhs.GetColor(), rhs.GetCoord());
}
// end Shape constructor

// Shape Destructor
Shape::~Shape() {
	// freeing the alloted memory
	if (this->mColor)
		delete[] this->mColor;
}
// end Shape Destructor

// Shape assignment operator.
Shape& Shape:: operator =(const Shape& rhs) {
	this->SetShape(rhs.GetColor(), rhs.GetCoord());
	return *this;
}
// end Shape assignment operator.


//============================= OPERATIONS ===================================
// function that depicts rotation of Shape.
void Shape::Rotate() {
	cout << "Rotating a Shape of " << this->GetColor() << " color." << endl;
}
// end function Rotate


//============================= ACESS      ===================================

// function that sets color of Shape
void Shape::SetColor(char* aColor) {
	// freeing the previously alloted memory
	if (mColor)
		delete[] mColor;

	// reserving new memory space for updated name
	if (aColor != NULL) {
		int len = strlen(aColor) + 1;
		this->mColor = new char[len];
		strcpy_s(this->mColor, len, aColor);
	}
	else {
		this->mColor = new char;
		strcpy_s(this->mColor, 1, "\0");
	}
}
// end function SetColor

// function that sets coordinate(s) of Shape
void Shape::SetCoord(int aCoord) {
	if (aCoord < 0)
		cout << "Error: Coord cannot be neagtive." << endl;
	else
		this->mCoord = aCoord;
}
// end function SetCoord

// function that sets Shape
void Shape::SetShape(char* aColor, int aCoord) {
	this->SetColor(aColor);
	this->SetCoord(aCoord);
}
// end function SetShape

// function that sets the Shape
void Shape::SetShape(const Shape &obj) {
	this->SetShape(obj.GetColor(), obj.GetCoord());
}
// end function SetShape

// function that gets color of Shape
char* Shape::GetColor() const {
	return (this->mColor);
}
// end function GetColor

// function that gets coordinate(s) of Shape
int Shape::GetCoord() const {
	return this->mCoord;
}
// end function GetCoord

// function that gets the Shape
const Shape& Shape::GetShape()const {
	return *this;
}
// end function GetShape
