#include "Armor.h"
#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;




Armor::Armor(char* i_name, char* i_description, int i_weight, int i_value, int i_defense):Item(i_name, i_description, i_weight, i_value)
{
	defense = i_defense;
}



void Armor::ArmorDescribe()
{
	ItemDescribe();
	cout << defense << endl;
}

