#pragma once
#include "Persoon.h"
#include <string>
using namespace std;

class Student : public Persoon
{
public:
	Student();
	Student(string name, int age);
};

