#ifndef MENU_H
#define MENU_H

#include <string>
#include <functional>
#include <vector>

struct MenuOption
{
	std::string name;
	std::function<bool()> func;
};

class Menu {
	private:
		std::vector<MenuOption> options;

	public:
		Menu();

		bool prompt();
};

#endif
