#include "Circle_Task2.h" 

Circle::Circle(char* pSomeColor, int SomeCoord, float SomeRadius) : mRadius(SomeRadius), Shape(pSomeColor, SomeCoord) { } 

void Circle::Draw() { 
	cout << "Drawing a Circle of radius " << mRadius << " ." << endl; 
	Shape::Draw(); 
} 

float Circle::ComputeArea() { 
	return (3.1429*mRadius*mRadius); 
}