#include "Class.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


Item::Item(string i_name, string i_description, int i_weight, int i_value):name(i_name),description(i_description),weight(i_weight),value(i_value){



}

void Item::Describe() {

	cout << name << endl;
	cout << description << endl;
	cout << weight << endl;
	cout << value << endl;

}

Weapon::Weapon(string i_name, string i_description, int i_weight, int i_value, int i_damage) :Item(i_name, i_description, i_weight, i_value),damage(i_damage)
{

	
}


void Weapon::Describe()
{
	Item::Describe();
	cout << damage << endl;

}


Armor::Armor(string i_name, string i_description, int i_weight, int i_value, int i_defense) :Item(i_name, i_description, i_weight, i_value),defense(i_defense)
{
	
}



void Armor::Describe()
{
	Item::Describe();
	cout << defense << endl;
}

Potion::Potion(string i_name, string i_description, int i_weight, int i_value, char* i_type, int i_capacity) : Item(i_name, i_description, i_weight, i_value),type(i_type),capacity(i_capacity)
{
	
}


void Potion::Describe()
{
	Item::Describe();
	cout << type << endl;
	cout << capacity << endl;

}

Shop::Shop(string i_name, vector <Item *> i_items):name(i_name), items(i_items) {
	

}

void Shop::ShowItemList() {
	
	for each(auto a in items) {
		a->Describe();
	}

}