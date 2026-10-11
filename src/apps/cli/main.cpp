#include <iostream>
#include <vector>
#include <comeec.h>

#include "menu.h"

int main() 
{
	std::cout << "Welcome to Comeec!\n";

	foo();
	Menu menu;
	while (menu.prompt());

	return 0;
}

