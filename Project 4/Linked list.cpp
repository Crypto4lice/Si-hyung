#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node {                             //노드 정의
	int data;
	struct node* link;
}listnode;

typedef listnode* nodePtr;                        //노드 포인터 

typedef struct _list {                            // 리스트 정의
	int count;									  // 리스트에 몇개의 값이 있는지 알려줌
	nodePtr head;
}list;

void init(list* listPointer) {                    // 리스트 초기화
	listPointer->count = 0;
	listPointer->head = NULL;
}

void Insert(list* listPointer, int value, int position) {    //노드 삽입

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


void Delete(list* listPointer, int position) {           // 노드 삭제

	nodePtr temp = listPointer->head;

	for (int i = 0; i < position; i++) {
		temp = temp->link;
	}
	nodePtr temp2 = temp->link;
	temp->link = temp2->link;
	free(temp2);

	listPointer->count--;
}

void search(list* listPointer, int value) {                // 노드 탐색

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