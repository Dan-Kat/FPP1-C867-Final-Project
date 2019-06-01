#pragma once
#include <string>
using namespace std;

enum degreeType {
	UNASSIGNED,
	SECURITY,
	NETWORK,
	SOFTWARE
};

degreeType convert(string inputStr);

degreeType convert(int inputInt);