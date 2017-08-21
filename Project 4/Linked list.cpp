#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node {                             //��� ����
	int data;
	struct node* link;
}listnode;

typedef listnode* nodePtr;                        //��� ������ 

typedef struct _list {                            // ����Ʈ ����
	int count;									  // ����Ʈ�� ��� ���� �ִ��� �˷���
	nodePtr head;
}list;

void init(list* listPointer) {                    // ����Ʈ �ʱ�ȭ
	listPointer->count = 0;
	listPointer->head = NULL;
}

void Insert(list* listPointer, int value, int position) {    //��� ����

	nodePtr new_nodePtr = (node*)malloc(sizeof(node));
	new_nodePtr->data = value;

	nodePtr temp;

	for (int i = 0; i < position; i++) {
		temp = temp->link;
	}
	new_nodePtr->link = temp->link;
	temp->link = new_nodePtr;

	listPointer++;
}


void Delete(list* listPointer, int position) {           // ��� ����

	nodePtr temp = listPointer->head;

	for (int i = 0; i < position; i++) {
		temp = temp->link;
	}
	nodePtr temp2 = temp->link;
	temp->link = temp2->link;
	free(temp2);

	listPointer->count--;
}

void search(list* listPointer, int value) {                // ��� Ž��

	nodePtr temp = listPointer->head;
	int i = 1;
	while (temp != NULL) {
		if (value == temp->data)
			break;
		i++;
		temp = temp->link;
	}

	printf("Value is %d", value);

	
}

int main() {
	
	list* firstList = (list*)malloc(sizeof(list));
	init(firstList);

}