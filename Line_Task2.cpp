#include "Line_Task2.h" 

Line::Line(char* pSomeColor, int SomeCoord, float SomeLength) : mLength(SomeLength), Shape(pSomeColor, SomeCoord) { } 

void Line::Draw() { 
	cout << "Drawing a Line of length " << mLength << " ." << endl; 
	Shape::Draw(); 
}