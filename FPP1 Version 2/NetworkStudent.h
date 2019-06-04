#pragma once
#include "Student.h"

class NetworkStudent :
	public Student
{
	using Student::Student;
public:
	NetworkStudent();
	~NetworkStudent();

	degreeType getDegreeProgram();
private:
	degreeType degree;
};
