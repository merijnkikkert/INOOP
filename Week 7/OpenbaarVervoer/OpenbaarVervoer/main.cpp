#include <iostream>
#include "Vervoer.h"
#include "Bus.h"

int main() {

	Bus bus1 = Bus();
	bus1.toonKosten();

	bus1.berekenNormaal(11);

	char c;
	std::cin >> c;

	return 0;
}