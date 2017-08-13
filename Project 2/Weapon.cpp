#include "Weapon.h"
#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;



Weapon::Weapon(char* i_name, char* i_description, int i_weight, int i_value, int i_damage):Item(i_name,i_description,i_weight,i_value)
{
	
	damage = i_damage;
}


void Weapon::WeaponDescribe()
{
	ItemDescribe();
	cout << damage << endl;

}