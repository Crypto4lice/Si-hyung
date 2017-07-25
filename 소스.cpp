#include "Class.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
	vector<Weapon> wp;
	vector<Armor> am;
	vector<Potion> pt;


	Weapon w0("Sword", "Medium DMG", 3, 10, 10);
	wp.push_back(w0);
	Weapon w1("Axe", "High DMG", 5, 15, 10);
	wp.push_back(w1);
	Armor a0("Cap", "Light Armor", 1, 5, 5);
	am.push_back(a0);
	Armor a1("Gloves", "Light Armor", 5, 15, 15);
	am.push_back(a1);
	Armor a2("Boots", "Light Armor", 1, 5, 5);
	am.push_back(a2);
	Potion p0("Small Health Potion", "Recovery 100 HP", 2, 5, "Health", 100);
	pt.push_back(p0);
	Potion p1("Small Mana Potion", "Recovery 50 MP", 1, 30, "Mana", 50);
	pt.push_back(p1);
	Potion p2("Medium Health Potion", "Recovery 200 HP", 4, 120, "Health", 200);
	pt.push_back(p2);
	Potion p3("Medium Mana Potion", "Recovery 100 MP", 2, 75, "Mana", 100);
	pt.push_back(p3);
	Potion p4("Large Health Potion", "Recovery 300 HP", 6, 200, "Health", 300);
	pt.push_back(p4);

	

	cout << " - Shop Select - " << endl;
	cout << "   1. Weapon/Armor Shop  " << endl;
	cout << "   2. Potion Shop  " << endl;
	cout << "   3. Exit  " << endl;

	int select;

	cin >> select;

	if (select == 1) {
		for (int i = 0; i < 2; i++)
			wp[i].WeaponDescribe();
		cout << endl;

		for (int i = 0; i < 3; i++)
			am[i].ArmorDescribe();
		cout << endl;
	}
	else if (select == 2) {
		for (int i = 0; i < 5; i++)
			pt[i].PotionDescribe();
		cout << endl;
	}
	else if (select == 3) {
		exit;
	}
	else
		cout << "Invalid number!Try again." << endl;







	return 0;
}