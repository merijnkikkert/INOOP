#pragma once
#include "Persoon.h"
#include <string>
using namespace std;

class Docent : public Persoon
{
private:
	double maandLoon;

public:
	Docent();
	Docent(string name, int age, double salary);
	double getSalary();
};