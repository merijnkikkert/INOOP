#include "Boek.h"
#include <iostream>


Boek::Boek()
{
	std::cout << "Boek constructed!" << std::endl;
}

Boek::Boek(std::string title, bool beschikbaar) {
	_title = title;
	_beschikbaar = beschikbaar;
}

Boek::~Boek()
{
	std::cout << "Boek deconstructed!" << std::endl;
}
