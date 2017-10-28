#pragma once
#include <string>

class Vervoer
{
public:
	Vervoer();
	Vervoer(int& capaciteit, double& prijs, double& start, double& toeslag);

	void toonKosten();

	int _capaciteit; // Maximum aantal passagiers
	double _prijs; // Prijs per kilometer
	double _start; // Starttarief vervoersmiddel
	double _toeslag; // Toeslag voor speciaal vervoer (zoals hogesnelheidtrein
};

