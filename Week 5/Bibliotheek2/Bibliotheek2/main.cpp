#include <iostream>
#include "Bibliotheek.h"

int main() {

	Bibliotheek bieb1 = Bibliotheek();
	bieb1.toonBeschikbaarheid();

	Bibliotheek bieb2 = Bibliotheek(bieb1);
	bieb2.biebNaam("School 7");
	bieb2.toonBeschikbaarheid();

	bieb1.biebNaam("Boekenclub Utrecht");
	bieb1.voegToe("How to get stay sane while learning C++ - Merijn Kikkert", true);
	
	bieb1.toonBeschikbaarheid();

	bieb2.verleenBoek(0);
	bieb2.toonBeschikbaarheid();

	char c;
	std::cin >> c;

	return 0;
}