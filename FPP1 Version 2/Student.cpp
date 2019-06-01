#pragma once
#include "Student.h"




Student::Student()
{
	studentID = "NULL";
	firstName = "NULL";
	lastName = "NULL";
	emailAddress = "NULL";
	age = NULL;
	for (int i = 0; i < sizeof(daysInCourse); ++i) {
		daysInCourse[i] = NULL;
	}
	studentDegree = UNASSIGNED;
}

Student::Student(string resStudentID, string resFirstName, string resLastName, string resEmailAddress, int resAge,
	int resDaysTC1, int resDaysTC2, int resDaysTC3, degreeType resStudentDegree)
{
	studentID = resStudentID;
	firstName = resFirstName;
	lastName = resLastName;
	emailAddress = resEmailAddress;
	age = resAge;
	daysInCourse[0] = resDaysTC1;
	daysInCourse[1] = resDaysTC2;
	daysInCourse[2] = resDaysTC3;
	studentDegree = resStudentDegree;
}

//-----------------Accessors----------------------------------

void Student::print() {
	cout << "Student ID: " << studentID << "\t";
	cout << "First Name: " << firstName << "\t";
	cout << "Last Name: " << lastName << "\t";
	cout << "Email: " << emailAddress << "\t";
	cout << "Age: " << age << "\t";
	cout << "Days left in course: " << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "\t";
	cout << "Students Degree: " << printDegree(studentDegree) << "\t" << endl << endl;
}

string Student::printDegree(degreeType inputDegree)
{
	if (inputDegree == UNASSIGNED) { return string("Unassigned"); }
	else if (inputDegree == NETWORK) { return string("Network"); }
	else if (inputDegree == SECURITY) { return string("Security"); }
	else if (inputDegree == SOFTWARE) { return string("Software"); }
}

degreeType Student::getDegreeProgram()
{
	return studentDegree;
}

string Student::getStudentID()
{
	return studentID;
}

string Student::getStudentName()
{
	string fullName = firstName + " " + lastName;
	return fullName;
}

string Student::getEmail()
{
	return emailAddress;
}

int Student::getAge()
{
	return age;
}

void Student::getDaysTC()
{
	cout << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << endl;
}

degreeType Student::getDegree()
{
	return studentDegree;
}

//-----------------------Mutators------------------------------
void Student::setStudentID(string newStudentID)
{
	studentID = newStudentID;
}

void Student::setStudentName(string newFirstname, string newLastName)
{
	firstName = newFirstname;
	lastName = newLastName;
}

void Student::setEmail(string newEmailAddress)
{
	emailAddress = newEmailAddress;
}

void Student::setAge(int newAge)
{
	age = newAge;
}

void Student::setDaysTC(int newDaysTC1, int newDaysTC2, int newDaysTC3)
{
	daysInCourse[0] = newDaysTC1;
	daysInCourse[1] = newDaysTC2;
	daysInCourse[2] = newDaysTC3;
}

void Student::setDegree(int newDegreeInt)
{
	studentDegree = convert(newDegreeInt);
}

void Student::setDegree(degreeType newDegreeStr)
{
	studentDegree = newDegreeStr;
}

//------------------------Destructors----------------------------
Student::~Student()
{
	cout << "Calling destructor for student object." << endl;
}
