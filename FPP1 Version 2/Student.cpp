#pragma once
#include "Student.h"
#include <iostream>
#include <cstddef>
using namespace std;

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
	return;
}

Student::Student(string resStudentID, string resFirstName, string resLastName, string resEmailAddress, int resAge,
	int resDaysTC[], degreeType resStudentDegree)
{
	studentID = resStudentID;
	firstName = resFirstName;
	lastName = resLastName;
	emailAddress = resEmailAddress;
	age = resAge;
	for (int i = 0; i < sizeof(daysInCourse); ++i) {
		daysInCourse[i] = resDaysTC[i];
	}
	studentDegree = resStudentDegree;
}

//-----------------Accessors----------------------------------

void Student::print() {
	cout << "Student ID: " << studentID << "\t";
	cout << "First Name: " << firstName << "\t";
	cout << "Last Name: " << lastName << "\t";
	cout << "Email: " << emailAddress << "\t";
	cout << "Age: " << age << "\t";
	cout << "Days left in course: " << daysInCourse << "\t";
	cout << "Students Degree: " << studentDegree << endl;
	return;
}

degreeType Student::getDegreeProgram()
{
	return studentDegree;
}

std::string Student::getStudentID()
{
	return this->studentID;
}

void Student::getStudentName()
{
}

void Student::getEmail()
{
}

void Student::getAge()
{
}

void Student::getDaysTC()
{
}

void Student::getDegree()
{
}

//-----------------------Mutators------------------------------
void Student::setStudentID()
{
}

void Student::setStudentName()
{
}

void Student::setEmail()
{
}

void Student::setAge()
{
}

void Student::setDaysTC()
{
}

void Student::setDegree()
{
}

//------------------------Destructors----------------------------
Student::~Student()
{
	cout << "Calling destructor for object." << endl;
}

