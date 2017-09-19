#pragma once
#include "Persoon.h"
#include <string>
using namespace std;

class Student : public Persoon
{
private:
	double studiekostenPM;

public:
	Student();
	Student(string name, int age, double studyCost);
	double getMonthlyCost();
};

