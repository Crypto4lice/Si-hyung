#include "Class.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
	vector<Item *> wp = {
	new Weapon("Sword", "Medium DMG", 3, 10, 10),

	new Weapon("Axe", "High DMG", 5, 15, 10),

	new Armor("Cap", "Light Armor", 1, 5, 5),

	new Armor("Gloves", "Light Armor", 5, 15, 15),

	new Armor("Boots", "Light Armor", 1, 5, 5),

	new Potion("Small Health Potion", "Recovery 100 HP", 2, 5, "Health", 100),

	new Potion("Small Mana Potion", "Recovery 50 MP", 1, 30, "Mana", 50),

	new Potion("Medium Health Potion", "Recovery 200 HP", 4, 120, "Health", 200),

	new Potion("Medium Mana Potion", "Recovery 100 MP", 2, 75, "Mana", 100),

	new Potion("Large Health Potion", "Recovery 300 HP", 6, 200, "Health", 300)

	};

	Shop* weaponshop = new Shop("itemshop", wp);
	weaponshop->ShowItemList();

	



	
	







	return 0;
}