#include <iostream>
#include <vector>
#include <pqxx/pqxx>

#include "menu.h"

int main() 
{
	std::cout << "Welcome to Comeec!\n";

	pqxx::connection cx;

	Menu menu;
	while (menu.prompt());

	return 0;
}

