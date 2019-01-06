#include "Triangle_Task2.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Triangle Default+Overloaded Constructor
Triangle::Triangle(char* aColor, int aCoord, float aAngle) : Shape(aColor, aCoord), mAngle(aAngle) {
	this->SetTriangle(aAngle);
}
// end Triangle constructor 

// Triangle Copy Constructor
Triangle::Triangle(const Triangle& rhs) : Shape(rhs.GetShape()), mAngle(rhs.GetAngle()) {
	this->SetTriangle(rhs.GetAngle());
}
// end Triangle constructor

// Triangle assignment operator.
Triangle& Triangle:: operator =(const Triangle& rhs) {
	this->SetTriangle(rhs.GetTriangle());
	return *this;
}
// end Triangle assignment operator.


//============================= OPERATIONS ===================================
// Pure virtual function that draws Triangle.
void Triangle::Draw() {
	cout << "Drawing an equilateral Triangle of angle " << this->GetAngle() << " in " << this->GetColor() << " color." << endl;
}
// end function Draw

// function that computes area of Triangle.
void Triangle::ComputeArea() {
	cout << "Computing the area of Triangle with angle " << this->GetAngle() << " ." << endl;
}
// end function ComputeArea


//============================= ACESS      ===================================

// function that sets angles of Triangle
void Triangle::SetAngle(float aAngle) {
	this->mAngle = aAngle;
}
// end function SetAngle

// function that sets Triangle
void Triangle::SetTriangle(char* aColor, int aCoord, float aAngle) {
	this->SetShape(aColor, aCoord);
	this->SetTriangle(aAngle);
}
// end function SetTriangle

// overloaded function that sets the Triangle
void Triangle::SetTriangle(float aAngle) {
	this->SetAngle(aAngle);
}
// end function SetTriangle

// overloaded function that sets the Triangle
void Triangle::SetTriangle(const Triangle& aTriangle) {
	this->SetTriangle(aTriangle.GetColor(), aTriangle.GetCoord(), aTriangle.GetAngle());
}
// end function SetTriangle

// function that gets angle of Triangle
float Triangle::GetAngle()const {
	return this->mAngle;
}
// end function GetAngle

// function that gets the Triangle
const Triangle& Triangle::GetTriangle()const {
	return *this;
}
// end function GetTriangle
