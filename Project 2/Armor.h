#pragma once
#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Armor : public Item
{
private:
	int defense;

public:
	Armor(char* i_name, char* i_description, int i_weight, int i_value, int i_defense);
	

	void Armor::ArmorDescribe();
	
};

