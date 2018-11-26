#ifndef TRIANGLE_HEADER_Task2
#define TRIANGLE_HEADER_Task2 

#include "Shape_Task2.h" 

class Triangle :public Shape{ 
	float mAngle; 
public: 
	Triangle(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
	void ComputeArea(); 
};

#endif