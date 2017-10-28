#include <iostream>
#include "Bibliotheek.h"

char c;

int main() {

	Bibliotheek bieb = Bibliotheek();


	bieb.toonBeschikbaarheid();

	bieb.verleenBoek();
	bieb.toonBeschikbaarheid();

	std::cin >> c;
	return 0;
}