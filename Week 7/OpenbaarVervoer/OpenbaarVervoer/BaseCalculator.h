#pragma once
#include <string>

class BaseCalculator
{
public:
	BaseCalculator();
	virtual void berekenNormaal(double& afstand, double& prijs, double& start, int& capaciteit);
	virtual void berekenMetToeslag();
};

