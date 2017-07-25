#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item
{
private:
	string name;
	string description;
	int weight;
	int value;


public:

	Item(string i_name, string i_description, int i_weight, int i_value);

	void ItemDescribe();
};

class Weapon : public Item
{
private:
	int damage;
public:

	Weapon(string i_name, string i_description, int i_weight, int i_value, int i_damage);

	void Weapon::WeaponDescribe();

};

class Armor : public Item
{
private:
	int defense;

public:
	Armor(string i_name, string i_description, int i_weight, int i_value, int i_defense);


	void Armor::ArmorDescribe();

};

class Potion :public Item
{
private:
	string type;
	int capacity;
public:
	Potion(string i_name, string i_description, int i_weight, int i_value, char* i_type, int i_capacity);

	void Potion::PotionDescribe();

};

class Shop
{
private:
	string name;
	vector <Item> items;
	
public:

	Shop(string i_name, vector <Item> i_items);

	void ShowItemList();
};

