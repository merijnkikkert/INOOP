#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek()
{
}

void Bibliotheek::toonBeschikbaarheid() {
	std::string boekBeschikbaarheid;

	if (boek->_beschikbaar == true)
		boekBeschikbaarheid = "beschikbaar.";
	else
		boekBeschikbaarheid = "niet beschikbaar.";

	std::cout << "Het boek '" << boek->_title << "' is " << boekBeschikbaarheid << std::endl;
}

void Bibliotheek::verleenBoek() {
	boek->_beschikbaar = !boek->_beschikbaar;
}