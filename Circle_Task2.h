#ifndef CIRCLE_HEADER_Task2
#define CIRCLE_HEADER_Task2 

#include "Shape_Task2.h" 

class Circle :public Shape{ 
	float mRadius; 
public: 
	Circle(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
	float ComputeArea(); 
};

#endif