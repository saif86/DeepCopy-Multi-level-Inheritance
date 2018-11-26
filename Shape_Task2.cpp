#include "Shape_Task2.h"

Shape::Shape(char* pSomeColor, int SomeCoord) : mColor(pSomeColor), mCoord(SomeCoord){ 
	if (pSomeColor != NULL) { 
		int Len = strlen(pSomeColor) + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, pSomeColor); 
	} 
	else { 
		int Len = strlen("invisible") + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, "invisible"); 
	} 
} 

Shape::Shape(const Shape& rhs) { 
	int len = strlen(rhs.mColor) + 1; 
	mColor = new char[len]; 
	strcpy_s(mColor, len, rhs.mColor); 
} 

Shape::~Shape() { 
	if (mColor){ 
		delete[] mColor; 
	} 
} 

Shape& Shape::operator = (const Shape& rhs) { 
	int len = strlen(rhs.mColor) + 1; 
	mColor = new char[len]; 
	strcpy_s(mColor, len, rhs.mColor); 
	return *this; 
} 

void Shape::Draw() { 
	cout << "The Shape is drawn in " << mColor <<" color." << endl; 
} 

void Shape::Rotate() { 
	cout << "Rotating a Shape of " << mColor << " color." << endl; 
} 

void Shape::SetColor(char* pSomeColor) { 
	if (pSomeColor != NULL) { 
		int Len = strlen(pSomeColor) + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, pSomeColor); 
	} 
	else {
		int Len = strlen("invisible") + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, "invisible"); 
	} 
}