#include "pch.h"
#include "NGen.h"
#include <iostream>

int main()
{
	char res;
	do
	{
		std::cout << "1: humans\n2: orcs\n3: Elves\n4: Dwarven\nYour choice: ";
		char choice;
		std::cin >> choice;
		while (std::strchr("1234", choice) == nullptr) {
			std::cout << "Enter 1 or 2 or 3 or 4: ";
			std::cin >> choice;
		}
		
		if (choice == '1') {
			NGen test;
			test.showAvaibleNames();
			test.pickName();
			test.showGeneratedName();
		}
		if (choice == '2') {
			OrcNames test2;
			test2.showAvaibleNames();
			test2.pickRandomized();
			test2.showGeneratedName();
		}
		if (choice == '3') {
			ElfNames test3;
			test3.showAvaibleNames();
			test3.pickRandomized();
			test3.showGeneratedName();
		}
		if (choice == '4') {
			DwarfNames test4;
			test4.showAvaibleNames();
			test4.pickRandomized();
			test4.showGeneratedName();
		}

		std::cout << "\nAgain? <y/n>: ";
		std::cin >> res;
		while (std::strchr("ynYN", res) == nullptr) {
			std::cout << "Enter y or n: ";
			std::cin >> res;
		}
	} while (res != 'n');
	std::cout << "\nGoodbye.\n";

	return 0;
}
