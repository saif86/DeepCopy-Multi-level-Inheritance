/**
* @file Task2_main.cpp
*
* @brief This code implements inheritance (Task/Example2).
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// LOCAL INCLUDES
#include "Circle_Task2.h" 
#include "Line_Task2.h" 
#include "Triangle_Task2.h" 



// function main begins program execution
void main() {
	Circle c1;
	{
		Circle c2("black", 3, 2.3);
		c2.SetColor("Light Green");
		c1 = c2;
	}

	cout << "Circle 1" << endl;
	c1.Draw();
	c1.Rotate();
	cout << "The Area of Circle 1 is: " << c1.ComputeArea() << endl << endl;

	system("pause");
}
// end main
