#include <iostream>
#include <fstream>
#include <string>

#define FILE "6_1_text-1.txt"

std::string mainContent;
std::string backContent;

int main() {

	char ch;
	
	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Kan geen .txt bestand vinden..." << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open("6_1_text-2.txt");
	if (!out_stream)
	{
		std::cout << "Kan geen .txt bestand openen..." << std::endl;
		exit(1);
	}

	std::noskipws(in_stream);

	while (!in_stream.eof())
	{
		in_stream >> ch;
		mainContent += ch;
	}

	for (int i = mainContent.length() - 1; i > 0; i--) // -1 achter de length om te voorkomen dat de laatste letter dubbel verschijnt
	{
		out_stream << mainContent.at(i - 1);
	}

	return 0;
}