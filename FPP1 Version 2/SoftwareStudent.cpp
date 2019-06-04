#pragma once
#include "SoftwareStudent.h"



SoftwareStudent::SoftwareStudent()
{
	degree = SOFTWARE;
}


SoftwareStudent::~SoftwareStudent()
{
	cout << "Calling destructor for SoftwareStudent object." << endl;
}

degreeType SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}
