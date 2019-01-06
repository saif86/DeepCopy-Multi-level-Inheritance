#include "Circle_Task2.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Circle Default+Overloaded Constructor
Circle::Circle(char* aColor, int aCoord, float aRadius) : Shape(aColor, aCoord), mRadius(aRadius) {
	this->SetCircle(aRadius);
}
// end Circle constructor 

// Circle Copy Constructor
Circle::Circle(const Circle& rhs) : Shape(rhs.GetShape()), mRadius(rhs.GetRadius()) {
	this->SetCircle(rhs.GetRadius());
}
// end Circle constructor

// Circle assignment operator.
Circle& Circle:: operator =(const Circle& rhs) {
	this->SetCircle(rhs.GetCircle());
	return *this;
}
// end Circle assignment operator.


//============================= OPERATIONS ===================================
// Pure virtual function that draws Circle.
void Circle::Draw() {
	cout << "Drawing a Circle of radius " << this->GetRadius() << " in " << this->GetColor() << " color." << endl;
}
// end function Draw

// function that computes area of Circle.
float Circle::ComputeArea() {
	return (3.1429*this->GetRadius()*this->GetRadius());
}
// end function ComputeArea


//============================= ACESS      ===================================

// function that sets radius of Circle
void Circle::SetRadius(float aRadius) {
	if (aRadius < 0.0)
		cout << "Error: Radius cannot be nagative." << endl;
	else
		this->mRadius = aRadius;
}
// end function SetRadius

// function that sets Circle
void Circle::SetCircle(char* aColor, int aCoord, float aRadius) {
	this->SetShape(aColor, aCoord);
	this->SetCircle(aRadius);
}
// end function SetCircle

// overloaded function that sets the Circle
void Circle::SetCircle(float aRadius) {
	this->SetRadius(aRadius);
}
// end function SetCircle

// overloaded function that sets the Circle
void Circle::SetCircle(const Circle& aCircle) {
	this->SetCircle(aCircle.GetColor(), aCircle.GetCoord(), aCircle.GetRadius());
}
// end function SetCircle

// function that gets radius of Circle
float Circle::GetRadius()const {
	return this->mRadius;
}
// end function GetRadius

// function that gets the Circle
const Circle& Circle::GetCircle()const {
	return *this;
}
// end function GetCircle
