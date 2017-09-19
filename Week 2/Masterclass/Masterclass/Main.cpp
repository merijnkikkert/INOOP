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
	Student student2("Merijn Kikkert", 22);
	Docent docent1;
	Docent docent2("Edwin van Ouwerkerk Moria", 38); //Leeftijd is een gokje, mijn excuses als ik het fout heb!

	cout << "Standaard student/docent object zonder ingevulde attributen:" << endl << endl;
	cout << "SOORT:" << setw(30) << "NAAM:" << setw(30) <<  "LEEFTIJD:" << endl;
	cout << "Docent" << setw(30) << docent1.getName() << setw(30) << docent1.getAge() << endl;
	cout << "Student" << setw(29) << student1.getName() << setw(30) << student1.getAge() << endl;

	cout << endl << endl;

	cout << "Student/docent object met ingevulde attributen:" << endl << endl;
	cout << "SOORT:" << setw(30) << "NAAM:" << setw(30) << "LEEFTIJD:" << endl;
	cout << "Docent" << setw(30) << docent2.getName() << setw(30) << docent2.getAge() << endl;
	cout << "Student" << setw(29) << student2.getName() << setw(30) << student2.getAge() << endl;

	cin >> charac;

	return 0;
}
