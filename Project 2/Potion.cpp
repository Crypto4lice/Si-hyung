#include "Potion.h"
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;



Potion::Potion(char* i_name, char* i_description, int i_weight, int i_value, char* i_type, int i_capacity): Item(i_name, i_description, i_weight, i_value)
{
	strcpy(type, i_type);
	capacity = i_capacity;
}


void Potion::PotionDescribe()
{
	ItemDescribe();
	cout << type << endl;
	cout << capacity << endl;

}
