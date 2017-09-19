#pragma once
#include <string>
using namespace std;

class Persoon
{
protected:
	string naam;
	int leeftijd;

public:
	Persoon();
	string getName();
	int getAge();
};

