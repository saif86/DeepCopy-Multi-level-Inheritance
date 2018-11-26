#include "Triangle_Task2.h" 

Triangle::Triangle(char* pSomeColor, int SomeCoord, float SomeAngle) : mAngle(SomeAngle), Shape(pSomeColor, SomeCoord) { } 

void Triangle::Draw() { 
	cout << "Drawing a Triangle of angle " << mAngle << " ." << endl; 
	Shape::Draw(); 
} 

void Triangle::ComputeArea() { 
	cout << "Computing the area of Triangle with angle " << mAngle << " ." << endl; 
}