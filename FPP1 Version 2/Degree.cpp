#pragma once
#include "degree.h"


degreeType convert(string inputStr)
{
	if (inputStr == "UNASSIGNED") { return UNASSIGNED; }
	else if (inputStr == "NETWORK") { return NETWORK; }
	else if (inputStr == "SECURITY") { return SECURITY; }
	else if (inputStr == "SOFTWARE") { return SOFTWARE; }
}

degreeType convert(int inputInt)
{
	if (inputInt == 0) { return UNASSIGNED; }
	else if (inputInt == 1) { return NETWORK; }
	else if (inputInt == 2) { return SECURITY; }
	else if (inputInt == 3) { return SOFTWARE; }
}

