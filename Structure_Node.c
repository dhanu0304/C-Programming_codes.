// Singly Linked List - creation , Insertion , deletion , Traversal
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertEnd(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if (head == NULL) {
    head = newNode;
} else {
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
}
void insertBeginning(int value) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = head;
head = newNode;
}
void deleteNode(int value) {
struct Node* temp = head;
struct Node* prev = NULL;
if (temp != NULL && temp->data == value) {
    head = temp->next;
    free(temp);
    return;
}
while (temp != NULL && temp->data != value) {
    prev = temp;
    temp = temp->next;
}
if (temp == NULL) {
    printf("value not found!\n");
