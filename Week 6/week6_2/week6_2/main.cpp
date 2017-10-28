#include <iostream>
#include <fstream>
#include <string>

#define FILE "6_2_text-1.txt"

int main() {

	char ch;
	bool activeScript = false; //Ik gebruik een array met 2 ofstreams, 0 en 1. Ik gebruik een bool om tussen deze twee te wisselen.

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Kan geen .txt bestand vinden..." << std::endl;
		exit(1);
	}

	std::ofstream out_stream[2];
	out_stream[0].open("6_2_text-2.txt");
	if (!out_stream[0])
	{
		std::cout << "Kan geen .txt bestand openen..." << std::endl;
		exit(1);
	}

	out_stream[1].open("6_2_text-3.txt");
	if (!out_stream[1])
	{
		std::cout << "Kan geen .txt bestand openen..." << std::endl;
		exit(1);
	}

	std::noskipws(in_stream);

	while (!in_stream.eof())
	{
		in_stream >> ch;
		if (ch == '.')
		{
			activeScript = !activeScript; // Als er een '.' gevonden veranderd het active script door 0 naar 1 en 1 naar 0 te veranderen met !activescript
		}
		out_stream[activeScript] << ch;
	}

	return 0;
}