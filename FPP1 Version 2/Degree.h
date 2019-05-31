#pragma once
#include <string>

enum degreeType {
	UNASSIGNED,
	SECURITY,
	NETWORKING,
	SOFTWARE
};

degreeType convert(std::string inputStr);

degreeType convert(int inputInt);