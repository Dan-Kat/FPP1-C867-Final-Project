#pragma once
#include "degree.h"
#include <iostream>
#include <cstddef>

class Student
{
public:
	Student();
	Student(string resStudentID, string resFirstName, string resLastName, string resEmailAddress, int resAge,
		int resDaysTC1, int resDaysTC2, int resDaysTC3, degreeType resStudentDegree);
	~Student();

	string getStudentID();
	string getStudentName();
	string getEmail();
	int getAge();
	void getDaysTC();
	degreeType getDegree();
	virtual degreeType getDegreeProgram();

	void setStudentID(string newStudentID);
	void setStudentName(string newFirstName, string newLastName);
	void setEmail(string newEmailAddress);
	void setAge(int newAge);
	void setDaysTC(int newDaysTC1, int newDaysTC2, int newDaysTC3);
	void setDegree(degreeType newDegreeStr);
	void setDegree(int newDegreeInt);
	
	string printDegree(degreeType inputDegree);
	void print();

protected:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	degreeType studentDegree;
};




