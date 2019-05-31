#pragma once
#include "Roster.h"
#include <iostream>
#include <sstream>
 
Roster::Roster()
{
}

Roster::~Roster()
{
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string studentDegree)
{
	int tempDaysInCourse[3];
	tempDaysInCourse[0] = daysInCourse1;
	tempDaysInCourse[1] = daysInCourse2;
	tempDaysInCourse[2] = daysInCourse3;

	Student *newStudentPtr = new Student(studentID, firstName, lastName, emailAddress, age, tempDaysInCourse, convert(studentDegree));
	classRosterArray[size] = newStudentPtr;
	size++;
}

void Roster::remove(string studentID)
{
	for (int i = 0; i < sizeof(classRosterArray); ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			classRosterArray[i] = nullptr;
			cout << "Student with the ID of " << studentID << " has been removed." << endl;
		}
		else {
			cout << "Student with the ID of " << studentID << " was not found." << endl;
		}

	}
	return;
}

void Roster::printAll()
{
	for (int i = 0; i < sizeof(classRosterArray); ++i) {
		classRosterArray[i]->print();
	}
	return;
}

void Roster::printDaysInCourse(string studentID)
{
}

void Roster::printInvalidEmails()
{
}

void Roster::printByDegreeProgram(int degreeeProgram)
{
}

int main() {
	
	Roster classRoster;

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Daniel,Creutz,dcreut1@wgu.edu,26,20,50,50,SOFTWARE" };

	char delimeter = ',';
	string iStudentID[5];
	string iFirstName[5];
	string iLastName[5];
	string iEmail[5];
	string iAge[5];
	string iDaysTC1[5];
	string iDaysTC2[5];
	string iDaysTC3[5];
	string iDegree[5];
	
	for (int i = 0; i < sizeof(studentData - 1); ++i) {
		istringstream iss;

		iss.str(studentData[i]);
		getline(iss, iStudentID[i], delimeter);
		getline(iss, iFirstName[i], delimeter);
		getline(iss, iLastName[i], delimeter);
		getline(iss, iEmail[i], delimeter);
		getline(iss, iAge[i], delimeter);
		getline(iss, iDaysTC1[i], delimeter);
		getline(iss, iDaysTC2[i], delimeter);
		getline(iss, iDaysTC3[i], delimeter);
		getline(iss, iDegree[i], delimeter);
	}
	
	for (int i = 0; i < sizeof(studentData - 1); ++i) {
		classRoster.add(iStudentID[i], iFirstName[i], iLastName[i], iEmail[i], stoi(iAge[i]), stoi(iDaysTC1[i]), stoi(iDaysTC2[i]), stoi(iDaysTC3[i]), iDegree[i]);
	}

	return 0;
}