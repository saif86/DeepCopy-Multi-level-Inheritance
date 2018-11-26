#include "Teacher_Task3.h" 
#include "UndergraduateStudent_Task3.h"
#include "PostgraduateStudent_Task3.h" 

void main(){
	UndergraduateStudent UGs("Muhammad Rafael", 17, 'M', "Computer Science", 2014,4); 
	PostgraduateStudent PGs("Bilal Hussain", 23, 'M', "Management Science", 2015, 2); 
	Teacher t1("Saif Ullah Ijaz", 28, 'M', "Lecturer"); 
	
	cout << "Undergraduate Student : " << endl << "Name: " << UGs.getName() << endl << "Gender: " << UGs.getGender() << endl; 
	cout << "Program: " << UGs.getProgram() << endl; 
	cout << "Year of Study: " << UGs.getStudyYear() << endl; 
	cout << "Program Duration: " << UGs.getProgramLength() << endl; 
	
	UGs.eat(); 
	UGs.walk(); 
	UGs.study(); 
	UGs.heldExam(); 
	UGs.play(); 
	
	cout << endl << endl; 
	cout << "Postgraduate Student : " << endl << "Name: " << PGs.getName() << endl << "Gender: " << PGs.getGender() << endl; 
	cout << "Program: " << PGs.getProgram() << endl; 
	cout << "Year of Study: " << PGs.getStudyYear() << endl; 
	cout << "Program Duration: " << PGs.getProgramLength() << endl; 
	
	PGs.eat(); 
	PGs.walk(); 
	PGs.study(); 
	PGs.heldExam(); 
	PGs.teach(); 
	
	cout << endl << "Teacher 1: " << endl << "Name: " << t1.getName() << endl << "Gender: " << t1.getGender() << endl; 
	t1.eat(); 
	t1.walk(); 
	t1.teach(); 
	t1.takeExam(); 
	
	system("pause"); 
}