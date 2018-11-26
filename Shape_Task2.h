#ifndef SHAPE_HEADER_Task2
#define SHAPE_HEADER_Task2 

#include <iostream> 
using namespace std; 

class Shape{ 
	char* mColor; 
	int mCoord; 
public: 
	Shape(char* = NULL, int = 0); 
	Shape(const Shape&); 
	~Shape(); 
	Shape& operator = (const Shape&); 
	void Draw(); 
	void Rotate(); 
	void SetColor(char*); 
}; 

#endif