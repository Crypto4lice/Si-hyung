#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Potion:public Item
{
private:
	char type[100];
	int capacity;
public:
	Potion(char* i_name, char* i_description, int i_weight, int i_value, char* i_type, int i_capacity);
	
	void Potion::PotionDescribe();

};

