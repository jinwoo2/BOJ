#include <stdio.h>
#include <stdlib.h>


typedef struct listNode {
	int Data;
	struct listNode* Next;
	struct listNode* Prev;
}Node;

//node creation
Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	//초기화
	newNode->Data = data;
	newNode->Next = NULL;
	newNode->Prev - NULL;
	return newNode;

}

//node memory delete
void deleteNode(Node* Node) {
	free(Node);
}

Node* getNodeAt(Node* head, int index) {

	Node* horse = head;
	int count = 0;
	while (horse != NULL) {
		if (count++ == index) {
			return horse;
			}
		horse = horse->Next;
	}
	return NULL;
}
//list 개수 반환
int  countNode(Node* head) {
	int count = 0;
	Node* horse = head;

	while (horse != NULL) {
		horse = horse->Next;
		count++;
	}
	return count++;
}
//append 노드를 마지막에 추가하는것
void addNode(Node** head, Node* newNode) {
	//no list exists
	if ((*head) == NULL) {
		*head = newNode;
	}
	//list exists
	else {
		Node* horse = (*head);
		while (horse->Next != NULL) {
			horse = horse->Next;
		}
		horse->Next = newNode;
		newNode->Prev = horse;
	}
}

void insertNode(Node* current, Node* newNode) {

	//head
	if (current->Prev == NULL && current->Next == NULL) {
		current->Next = newNode;
		newNode->Prev = current;

	}
	//not head
	if (current->Next == NULL) {
		current->Next = newNode;
		newNode->Prev = current;
	}
	//in the middle of 2 nodes
	else {
		current->Next->Prev = newNode;
		newNode->Prev = current;
		newNode->Next = current->Next;
		current->Next = newNode;
	}
}

void removeNode(Node** head, Node* remove) {
	//head
	if (*head == remove) {
		*head = remove->Next;

	}
	// when remove has next link to go
	if (remove->Next != NULL) {
		remove->Next->Prev = remove->Prev;

	}
	
	if (remove->Prev != NULL) {
		remove->Prev->Next = remove->Next;
	}
	deleteNode(remove);
}


int main() {
	int i = 0;
	int count = 0;

	Node* List = NULL;
	Node* newNode = NULL;
	Node* Curr = NULL;

	for (i = 0; i < 5; i++) {
		newNode = createNode(i);
		addNode(&List, newNode);
	}
	count = countNode(List);
	for (i = 0; i < count; i++) {
		Curr = getNodeAt(List, i);
		printf("List[%d] = %d\n", i, Curr->Data);

	}
	printf("------5 Node Created -----\n");
	newNode = createNode(99);
	Curr = getNodeAt(List, 0);
	insertAfter(Curr, newNode);

	newNode = createNode(444);
	Curr = getNodeAt(List, 4);
	insertNode(Curr, newNode);

	count = countNode(List);
	for (i = 0; i < count; i++) {
		Curr = getNodeAt(List, i);
		printf("List[%d] = %d\n", i, Curr->Data);

	}

	printf("----------after 2 Nodes inserted ------\n");

	newNode = getNodeAt(List, 1);
	removeNode(&List, newNode);

	newNode = getNodeAt(List, 0);
	removeNode(&List, newNode);

	count = countNode(List);
	for (i = 0; i < count; i++) {
		Curr = getNodeAt(List, i);
		printf("List[%d]=%d\n", i, Curr->Data);
	}
	return 0;
}