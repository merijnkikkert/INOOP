#pragma once
#include "Boek.h"

class Bibliotheek
{
public:
	Bibliotheek();

	void toonBeschikbaarheid();

	void verleenBoek();

private:
	Boek* boek = new Boek();
};

