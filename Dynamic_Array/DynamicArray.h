#include <stdio.h>
#include <iostream>


class dynamicArray
{
private:
	int* m_array;
	int m_size;
	int m_used;


public:
	dynamicArray();
	dynamicArray(int size);
	~dynamicArray();

	void popBack();
	void pushBack(int data);
	void print();
	int &operator[](int index);


};
