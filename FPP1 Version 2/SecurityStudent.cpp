#pragma once
#include "SecurityStudent.h"



SecurityStudent::SecurityStudent()
{
	degree = SECURITY;
}

SecurityStudent::~SecurityStudent()
{
	cout << "Calling destructor for SecurityStudent object." << endl;
}

degreeType SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}
