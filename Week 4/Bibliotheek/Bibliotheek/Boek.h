#pragma once
#include <string>

class Boek
{
public:
	Boek();
	Boek(std::string title, bool beschikbaar);

	std::string _title = "C++ voor mensen met een verstandelijke beperking A.K.A. INOOP - Edwin van Ouwerkerk Moria";
	bool _beschikbaar = false;
};

