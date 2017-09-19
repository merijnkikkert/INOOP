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
	virtual string getName();
	virtual int getAge();
};

