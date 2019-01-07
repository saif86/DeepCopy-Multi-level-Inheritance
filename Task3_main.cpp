/**
* @file Task3_main.cpp
*
* @brief This code implements multi-level inheritance (Task/Example3).
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
using namespace std;

// LOCAL INCLUDES
#include "Teacher_Task1.h" 
#include "UndergraduateStudent_Task3.h"
#include "PostgraduateStudent_Task3.h" 



// function main begins program execution
void main() {
	UndergraduateStudent UGs("Muhammad Rafael", 17, 'M', "studen", "Computer Science", 2014, 4);
	PostgraduateStudent PGs("Bilal Hussain", 23, 'M', "student", "Management Science", 2015, 2);
	Teacher t1("Saif Ullah Ijaz", 28, 'M', "Lecturer");

	cout << "Undergraduate Student : " << endl << "Name: " << UGs.GetName() << endl << "Gender: " << UGs.GetGender() << endl;
	cout << "Program: " << UGs.GetProgram() << endl;
	cout << "Year of Study: " << UGs.GetStudyYear() << endl;
	cout << "Program Duration: " << UGs.GetProgramLength() << endl;

	UGs.Eat();
	UGs.Walk();
	UGs.Study();
	UGs.HeldExam();
	UGs.Play();

	cout << endl << endl;
	cout << "Postgraduate Student : " << endl << "Name: " << PGs.GetName() << endl << "Gender: " << PGs.GetGender() << endl;
	cout << "Program: " << PGs.GetProgram() << endl;
	cout << "Year of Study: " << PGs.GetStudyYear() << endl;
	cout << "Program Duration: " << PGs.GetProgramLength() << endl;

	PGs.Eat();
	PGs.Walk();
	PGs.Study();
	PGs.HeldExam();
	PGs.Teach();

	cout << endl << "Teacher 1: " << endl << "Name: " << t1.GetName() << endl << "Gender: " << t1.GetGender() << endl;
	t1.Eat();
	t1.Walk();
	t1.Teach();
	t1.TakeExam();

	system("pause");
}
// end main
