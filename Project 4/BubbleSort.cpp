#include <iostream>

using namespace std;


void swap(int *a, int *b) {
	
	*a = *b - *a;
	*b = *b - *a;
	*a = *b + *a;
	
}


int main() {
	int temp;
	int array[7] = { 3, 7, 1, 10, 2, 20, 25 };


	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 6 - i; k++)
			if (array[k] > array[k + 1]) {
				
				swap(&array[k], &array[k+1]);

			}
	}


	for (int i = 0; i < 7; i++)
		cout << array[i] << endl;

	return 0;
}
