#pragma once
#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Weapon : public Item
{
private:
	int damage;
public:

	Weapon(char* i_name, char* i_description, int i_weight, int i_value, int i_damage);
	
	void Weapon::WeaponDescribe();
	



};

