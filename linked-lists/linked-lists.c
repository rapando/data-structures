//
// Created by sam on 10/8/20.
//
#include <stdio.h>

#include "linked-lists.h"


typedef struct node {
    int data;
    struct node *next;
} node;

// Entry Function
void linkedListsEntry() {
    printf("******* Linked Lists ******* \n");
    struct node *headNode = createLinkedList();
    traverseLinkedList(headNode);
}

struct node *createLinkedList() {
    // Create a linked list with 10 items and return the head only
    printf("Creating a linked list with 10 items...\n");

    struct node *headNode, *currentNode, *temp;

    for (int i = 0; i < 10; i++) {
        currentNode = (node *) malloc(sizeof(node));
        currentNode->data = i;
        if (i == 0) {
            headNode = temp = currentNode;
        } else {
            temp->next = currentNode;
            temp = currentNode;
        }
    }
    printf("\nDone creating linked list...\n");
    return headNode;
}

void traverseLinkedList(struct node *head) {
    printf("\nTraversing linked list\n");
    while(1) {
        if (head->next != NULL) {
            printf("Data : %d\n", head->data);
            head = head->next;
        } else {
            printf ("Data : %d\n", head->data);
            break;
        }
    }
}