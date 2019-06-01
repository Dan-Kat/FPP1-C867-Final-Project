#pragma once
#include "Roster.h"
 
Roster::Roster()
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		classRosterArray[i] = nullptr;
	}
}

Roster::~Roster()
{
	cout << "Destructor called for Roster." << endl;
	delete[] * classRosterArray;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string studentDegree)
{
	Student *newStudentPtr = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, convert(studentDegree));
	classRosterArray[size] = newStudentPtr;
	size++;
	return;
}

void Roster::remove(string studentID)
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			classRosterArray[i] = nullptr;
			cout << "Student with the ID of " << studentID << " has been removed." << endl;
		}
	}
	return;
}

void Roster::printAll()
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		classRosterArray[i]->print();
	}
	return;
}

void Roster::printDaysInCourse(string studentID)
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << "Days left in courses: ";
			classRosterArray[i]->getDaysTC();
			cout << endl;
		}
		else {
			cout << "Student ID not found in roster." << endl;
		}
	}
	return;
}

void Roster::printInvalidEmails()
{
	//match if there is no @ symbol, if there is any white space, if there is no period after @
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		string emailCheck = classRosterArray[i]->getEmail();
		if (emailCheck.find(' ') != string::npos ||
			emailCheck.find('@') == string::npos ||
			emailCheck.find('.', emailCheck.find('@')) == string::npos) {
			cout << emailCheck << " is an invalid email address." << endl << endl;
		}
	}
}

void Roster::printByDegreeProgram(degreeType degreeProgram)
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		degreeType degreeCheck = classRosterArray[i]->getDegree();
		if (degreeProgram == degreeCheck) {
			classRosterArray[i]->print();
		}
	}
}

void Roster::printByDegreeProgram(string degreeProgram)
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		degreeType degreeCheck = classRosterArray[i]->getDegree();
		if (convert(degreeProgram) == degreeCheck) {
			classRosterArray[i]->print();
		}
	}
}

void Roster::printStudentNames()
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		cout << classRosterArray[i]->getStudentName() << endl;
	}
	return;
}

void main() {
	
	Roster classRoster;

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Daniel,Creutz,dcreut1@my.wgu.edu,26,20,50,50,SOFTWARE" };

	char delimeter = ',';
	string iStudentID;
	string iFirstName;
	string iLastName;
	string iEmail;
	string iAge;
	string iDaysTC1;
	string iDaysTC2;
	string iDaysTC3;
	string iDegree;
	
	for (int i = 0; i < sizeof(studentData) / sizeof(studentData[0]); ++i) {
		istringstream iss;

		iss.str(studentData[i]);
		getline(iss, iStudentID, delimeter);
		getline(iss, iFirstName, delimeter);
		getline(iss, iLastName, delimeter);
		getline(iss, iEmail, delimeter);
		getline(iss, iAge, delimeter);
		getline(iss, iDaysTC1, delimeter);
		getline(iss, iDaysTC2, delimeter);
		getline(iss, iDaysTC3, delimeter);
		getline(iss, iDegree, delimeter);

		classRoster.add(iStudentID, iFirstName, iLastName, iEmail, stoi(iAge), stoi(iDaysTC1), stoi(iDaysTC2), stoi(iDaysTC3), iDegree);
	}

	cout << "Course: Scripting and Programming - Applications - C867" << endl;
	cout << "Programing Language Used: C++" << endl;
	cout << "Student Name: Daniel Creutz" << endl;
	cout << "Student ID: 000874725" << endl << endl;

	classRoster.printAll();
	classRoster.printInvalidEmails();
	
	for (int i = 0; i < 5; i++) {
		string currentID = classRoster.classRosterArray[i]->getStudentID();
		string currentName = classRoster.classRosterArray[i]->getStudentName();
		cout << "Requested info for: " << currentName << endl;
		cout << "Student: " << currentID << endl;
		classRoster.printDaysInCourse(currentID);
		classRoster.printByDegreeProgram(SOFTWARE);
		classRoster.remove("A3");
		classRoster.remove("A3");
	}
	
	return;
}