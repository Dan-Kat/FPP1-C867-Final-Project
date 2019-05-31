#pragma once
#include <string>
#include "Student.h"
using namespace std;

class Roster
{
public:
	Roster();
	~Roster();
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		int daysInCourse3, string studentDegree);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeeProgram);
private:
	Student* classRosterArray[5];
	size_t size = 0;
};
