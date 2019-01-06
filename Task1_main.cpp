/**
* @file Task1_main.cpp
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
#include "Teacher_Task1.h" 
#include "Student_Task1.h" 
#include "Doctor_Task1.h" 



// function main begins program execution
void main() {
	Student s1; { 
		Student s2("Muhammad Rafael", 17, 'M',"studen", "Computer Science", 2014);
		s1 = s2;
		cout << "Student 2: " << endl << "Name: " << s2.GetName() << endl;
		
		s2.Eat();
		s2.Walk();
		s2.Study();
		s2.HeldExam();
	}

	cout << "Student 1: " << endl << "Name: " << s1.GetName() << endl;
	s1.Eat();
	s1.Walk();
	s1.Study();
	s1.HeldExam();

	system("pause");
}
// end main
