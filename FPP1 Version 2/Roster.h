#pragma once
#include <sstream>
#include "Student.h"

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
	void printByDegreeProgram(degreeType degreeProgram);
	void printByDegreeProgram(string degreeProgram);
	void printStudentNames();

	Student* classRosterArray[5];
private:
	size_t size = 0;
};
