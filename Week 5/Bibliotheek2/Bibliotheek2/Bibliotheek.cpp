#include <iostream>
#include <iomanip>
#include <vector>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek()
{
	std::cout << "Bibliotheek constructed!" << std::endl;
	myBoeken.push_back(new Boek);
}

Bibliotheek::Bibliotheek(std::string name) {
	_name = name;
}

Bibliotheek::~Bibliotheek()
{
	std::cout << "Bibliotheek deconstructed!" << std::endl;

	for (int i = 0; i < myBoeken.size(); i++)
	{
		delete myBoeken[i];
	}
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) 
{
	std::cout << "Bibliotheek Copied!" << std::endl;

	for (int i = 0; i < bibliotheek.myBoeken.size(); i++)
	{
		myBoeken.push_back(new Boek(bibliotheek.myBoeken[i]->_title, bibliotheek.myBoeken[i]->_beschikbaar));
	}
}

void Bibliotheek::toonBeschikbaarheid() 
{
	std::cout << "Bij de bibliotheek " << _name << " zijn de volgende boeken te krijgen:" << std::endl;

	for (int i = 0; i < myBoeken.size(); i++)
	{
		std::string boekBeschikbaarheid;

		if (myBoeken[i]->_beschikbaar == true)
			boekBeschikbaarheid = "beschikbaar!";
		else
			boekBeschikbaarheid = "niet beschikbaar!";

		std::cout << i + 1 << ". " <<  myBoeken[i]->_title << std::setw(30) << " --- Dit boek is op dit moment " << boekBeschikbaarheid << std::endl;
	}
}

void Bibliotheek::biebNaam(std::string name) {
	_name = name;
}

void Bibliotheek::voegToe(std::string name, bool beschikbaar)
{
	myBoeken.push_back(new Boek(name, beschikbaar));
}

void Bibliotheek::verleenBoek(int boekIndex) {
	myBoeken[boekIndex]->_beschikbaar = !myBoeken[boekIndex]->_beschikbaar;
}