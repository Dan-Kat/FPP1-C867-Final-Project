#pragma once
#include "degree.h"
#include <string>

class Student
{
public:
	Student();
	Student(std::string resStudentID, std::string resFirstName, std::string resLastName, std::string resEmailAddress, int resAge,
		int resDaysTC[], degreeType resStudentDegree);
	~Student();

	std::string getStudentID();
	void getStudentName();
	void getEmail();
	void getAge();
	void getDaysTC();
	void getDegree();

	void setStudentID();
	void setStudentName();
	void setEmail();
	void setAge();
	void setDaysTC();
	void setDegree();

	virtual degreeType getDegreeProgram();

	void print();

protected:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int daysInCourse[3];
	degreeType studentDegree;
};




