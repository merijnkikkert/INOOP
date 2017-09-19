#include "Docent.h"
#include <iostream>
using namespace std;

Docent::Docent()
{
	naam;
	leeftijd;
	maandLoon = 0;
}

Docent::Docent(string name, int age, double salary)
{
	naam = name;
	leeftijd = age;
	maandLoon = salary;
}

double Docent::getSalary()
{
	return maandLoon;
}