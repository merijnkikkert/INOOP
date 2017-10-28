#pragma once
#include <vector>
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();
	Bibliotheek(std::string name);
	virtual ~Bibliotheek();

	Bibliotheek(const Bibliotheek& bibliotheek);

	void toonBeschikbaarheid();
	void biebNaam(std::string name);
	void voegToe(std::string name, bool beschikbaar);
	void verleenBoek(int boekIndex);

	std::string _name = "Uitleen";

private:
	std::vector<Boek*> myBoeken;
};

