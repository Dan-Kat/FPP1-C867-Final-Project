#pragma once
#include "NetworkStudent.h"



NetworkStudent::NetworkStudent()
{
	degree = NETWORK;
}


NetworkStudent::~NetworkStudent()
{	
	cout << "Calling destructor for NetworkStudent object." << endl;
}

degreeType NetworkStudent::getDegreeProgram()
{
	return NETWORK;
}
