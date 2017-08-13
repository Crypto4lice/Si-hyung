#pragma once
#include "Item.h"
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Shop
{
private:
	char name[100];
	vector<char> list;
public:

	void ShowItemList();
};

