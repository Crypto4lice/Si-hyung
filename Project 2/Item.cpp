#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


Item::Item(char* i_name, char* i_description, int i_weight, int i_value) {

	strcpy(name, i_name);
	strcpy(description, i_description);
	weight = i_weight;
	value = i_value;

}

void Item::ItemDescribe() {

	cout << name << endl;
	cout << description << endl;
	cout << weight << endl;
	cout << value << endl;

}

