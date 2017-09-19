#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{
	naam;
	leeftijd;
	studiekostenPM = 0;
}

Student::Student(string name, int age, double studyCost)
{
	naam = name;
	leeftijd = age;
	studiekostenPM = studyCost;
}

double Student::getMonthlyCost() {
	return studiekostenPM;
}