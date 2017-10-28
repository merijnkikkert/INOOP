#pragma once
#include "Vervoer.h"
#include "BaseCalculator.h"

class Bus : public Vervoer, public BaseCalculator
{
public:
	Bus();
	Bus(int capaciteit, double prijs, double start, double toeslag);

	void berekenNormaal(double afstand);
	void berekenMetToeslag(int afstand);

};

