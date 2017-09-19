#include "Persoon.h"
#include "Student.h"
#include "Docent.h"
#include <iostream>
#include <iomanip>
using namespace std;

char charac;

int main()
{
	Student student1;
	Student student2("Merijn Kikkert", 22, 167.17);
	Docent docent1;
	Docent docent2("Edwin van Ouwerkerk Moria", 38, 2845.58); //Leeftijd is een gokje (loon ook), mijn excuses als ik het fout heb! Don't kill me...

	cout << "Standaard student/docent object zonder ingevulde attributen:" << endl << endl;
	cout << "SOORT:" << setw(30) << "NAAM:" << setw(13) <<  "LEEFTIJD:" << endl;
	cout << "Docent" << setw(30) << docent1.getName() << setw(13) << docent1.getAge() << setw(25) << "Maandloon: $" << docent1.getSalary() << endl;
	cout << "Student" << setw(29) << student1.getName() << setw(13) << student1.getAge() << setw(25) << "Studiekosten p.m: $" << student1.getMonthlyCost() << endl;

	cout << endl << endl;

	cout << "Student/docent object met ingevulde attributen:" << endl << endl;
	cout << "SOORT:" << setw(30) << "NAAM:" << setw(13) << "LEEFTIJD:" << endl;
	cout << "Docent" << setw(30) << docent2.getName() << setw(13) << docent2.getAge() << setw(20) << "Maandloon: $" << docent2.getSalary() << endl;
	cout << "Student" << setw(29) << student2.getName() << setw(13) << student2.getAge() << setw(25) << "Studiekosten p.m: $" << student2.getMonthlyCost() << endl;

	cin >> charac;

	return 0;
}
