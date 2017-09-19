#include "Persoon.h"
#include <iostream>
using namespace std;

Persoon::Persoon(){
	naam = "EMPTY";
	leeftijd = 0;
}

string Persoon::getName() {
	return naam;
}

int Persoon::getAge() {
	return leeftijd;
}