#include "Vervoer.h"
#include <iostream>
#include <iomanip>

Vervoer::Vervoer()
{
	_capaciteit = 0;
	_prijs = 0;
}

Vervoer::Vervoer(int& capaciteit, double& prijs, double& start, double& toeslag) : _capaciteit(capaciteit), _prijs(prijs), _start(start), _toeslag(toeslag)
{
	_capaciteit = capaciteit;
	_prijs = prijs;
}

void Vervoer::toonKosten()
{
	std::cout << "In deze bus kunnen " << std::setprecision(2) << std::fixed << _capaciteit << " passagiers en kost $" << _prijs << " per kilometer, met als starttarief $" << std::setprecision(2) << std::fixed << _start << std::endl;
}