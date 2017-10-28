#include "BaseCalculator.h"
#include <iostream>

BaseCalculator::BaseCalculator()
{
}

void BaseCalculator::berekenNormaal(double& afstand, double& prijs, double& start, int& capaciteit) {
	double opbrengst = (afstand * prijs + start) * capaciteit;

	std::cout << "De opbrengst van een vol vervoersmiddel is $" << opbrengst << std::endl;
}

void BaseCalculator::berekenMetToeslag() {

}
