#pragma once
#include "Student.h"

class SoftwareStudent :
	public Student
{
	using Student::Student;
public:
	SoftwareStudent();
	~SoftwareStudent();

	degreeType getDegreeProgram();

private:
	degreeType degree;
};

