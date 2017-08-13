#pragma once
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Item
{
private:
	char name[100];
	char description[100];
	int weight;
	int value;


public:

	Item(char* i_name, char* i_description, int i_weight, int i_value);
	
	void ItemDescribe();
};

