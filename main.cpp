#include <iostream>
#include <vector>

#include "menu.h"

int main() 
{
	std::cout << "Welcome to Comeec!\n";

	Menu menu;
	while (menu.prompt());

	return 0;
}

