#pragma once
#include "Persoon.h"
#include <string>
using namespace std;

class Docent : public Persoon
{
public:
	Docent();
	Docent(string name, int age);
};

