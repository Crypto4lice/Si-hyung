#include <iostream>

using namespace std;


typedef struct node {
	int data;
	struct node* link;
}listnode;


typedef listnode* nodePtr;



void Insert(int value, int position) {

	nodePtr new_nodePtr = (node*)malloc(sizeof(node));
	new_nodePtr->data = value;

	nodePtr temp;

	for (int i = 0; i < position; i++) {
		temp = temp->link;
	}
	new_nodePtr->link = temp->link;
	temp->link = new_nodePtr;

}


void Delete(int position) {

	nodePtr temp;

	for (int i = 0; i < position; i++) {
		temp = temp->link;
	}
	nodePtr temp2 = temp->link;
	temp->link = temp2->link;
	free(temp2);

}

int search(int value) {

	nodePtr temp;
	int i = 1;
	while (temp != NULL) {
		if (value == temp->data)
			break;
		i++;
		temp = temp->link;
	}
	cout <<  value + "is at" + i << endl;

	return i;
}

int main() {

}