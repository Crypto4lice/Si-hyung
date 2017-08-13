#include "dynamicArray.h"


dynamicArray::dynamicArray() : m_size(1)               // 디폴트 생성자
{
	m_array = new int[m_size];
}

dynamicArray::dynamicArray(int size) : m_size(size), m_used(0)    // 인자를 받는 생성자
{
	m_array = new int[m_size];
}

dynamicArray::~dynamicArray()
{
	delete[] m_array;
}


void dynamicArray::popBack()
{
	if (m_used == 0) return;

	m_used--;
	int* temp = new int[m_used];

	for (int i = 0; i < m_used; i++)
		temp[i] = m_array[i];

	delete[] m_array;
	m_array = new int[m_size];

	for (int i = 0; i < m_used; i++)
		m_array[i] = temp[i];

	delete[] temp;
	return;
}

void dynamicArray::pushBack(int data)
{
	if (m_size > m_used)
	{
		m_array[m_used] = data;
		m_used++;
		return;
	}


	int* temp = new int[m_size];

	for (int i = 0; i < m_used; i++)
		temp[i] = m_array[i];

	delete[] m_array;

	m_size *= 2;                   //크기 2배 늘리기

	m_array = new int[m_size];

	for (int i = 0; i < m_used; i++)
		m_array[i] = temp[i];

	m_array[m_used] = data;
	m_used++;

	delete[] temp;

	return;
}

void dynamicArray::print()
{
	for (int i = 0; i<this->m_used; i++)
		printf("%d ", this->m_array[i]);
	printf("\n");
}

int& dynamicArray::operator[](int index)
{
	return this->m_array[index];
}
