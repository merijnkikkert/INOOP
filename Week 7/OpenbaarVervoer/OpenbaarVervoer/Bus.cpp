#include "Bus.h"
#include <iostream>

Bus::Bus()
{
	_capaciteit = 50;
	_prijs = 0.11f;
	_start = 1.22f;
	_toeslag = 0.05f;
}

Bus::Bus(int capaciteit, double prijs, double start, double toeslag) : Vervoer (capaciteit, prijs, start, toeslag){
}

void Bus::berekenNormaal(double afstand) {
	/*
	double opbrengst = (afstand * _prijs + _start) * _capaciteit;

	std::cout << "De opbrengst van een vol vervoersmiddel is $" << opbrengst << std::endl;
	*/
	BaseCalculator().berekenNormaal(afstand, _prijs, _start, _capaciteit);
}

void Bus::berekenMetToeslag(int afstand) {
}
