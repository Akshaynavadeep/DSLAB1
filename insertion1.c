#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
int main() {
struct Node *head = NULL;
struct Node *newNode;
newNode = (struct Node *)malloc(sizeof(struct Node));
printf("Enter data: ");
scanf("%d", &newNode->data);
newNode->next = head;
head = newNode;
printf("Linked List: ");
printf("%d -> NULL\n", head->data);
return 0;
}

