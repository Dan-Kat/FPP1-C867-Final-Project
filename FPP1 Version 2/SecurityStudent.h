#pragma once
#include "Student.h"

class SecurityStudent :
	public Student
{
	using Student::Student;
public:
	SecurityStudent();
	~SecurityStudent();

	degreeType getDegreeProgram();
private:
	degreeType degree;
};
