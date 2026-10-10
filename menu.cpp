#include <iostream>
#include <cstddef>

#include "menu.h"

static bool listInventory() 
{
	std::cout << "Current inventory:\n";

	return true;
}

static bool addBook() 
{
	std::cout << "Adding book\n";

	return true;
}

static bool removeBook() 
{
	std::cout << "Removing book\n";

	return true;
}

static bool quit() 
{
	return false;
}

Menu::Menu() 
{
	options.push_back({"List inventory", listInventory});
	options.push_back({"Add book", addBook});
	options.push_back({"Remove book", removeBook});
	options.push_back({"Quit", quit});

	std::cout << "Menu initialized!\n";
}

bool Menu::prompt()
{
	size_t choice{};
	do {
		for (size_t i = 0; i < options.size(); i++) 
		{
			std::cout << (i + 1) << ": " << options[i].name << "\n";
		}

		std::cout << "Please select an option: ";
		
		std::cin >> choice;
		choice--;

		std::cout << "\n";
	} while (choice < 0 || choice >= options.size());

	return options[choice].func();
}

