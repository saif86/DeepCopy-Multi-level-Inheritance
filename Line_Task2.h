#ifndef LINE_HEADER_Task2
#define LINE_HEADER_Task2 

#include "Shape_Task2.h" 

class Line :public Shape{ 
	float mLength; 
public: 
	Line(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
};

#endif