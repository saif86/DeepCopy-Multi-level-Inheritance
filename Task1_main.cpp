#include "Teacher_Task1.h" 
#include "Student_Task1.h" 
#include "Doctor_Task1.h" 

void main() { 
	Student s1; { 
		Student s2("Muhammad Rafael", 17, 'M', "Computer Science", 2014); 
		s1 = s2; 
		cout << "Student 2: " << endl << "Name: " << s2.getName() << endl; 
		
		s2.eat(); 
		s2.walk(); 
		s2.study(); 
		s2.heldExam(); 
	} 
	
	cout << "Student 1: " << endl << "Name: " << s1.getName() << endl; 
	s1.eat(); 
	s1.walk(); 
	s1.study(); 
	s1.heldExam(); 
	
	system("pause"); 
}