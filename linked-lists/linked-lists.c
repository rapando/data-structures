//
// Created by sam on 10/8/20.
//
#include <stdio.h>

#include "linked-lists.h"


struct node {
    int data;
    struct node *next;
};

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
        currentNode = (struct node *) malloc(sizeof(struct node));
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


/*
 * In a linked list with n elements,
 * the first n-1 items have the 'next' pointer
 * the nth element has no 'next' pointer, therefore print it too
 * to do this, don't check if the 'next' pointer is NULL, check if the whole element is null
*/
void traverseLinkedList(struct node *head) {
    printf("\nTraversing linked list\n");
    while (head != NULL) {
        printf("Data : %d\n", head->data);
        head = head->next;
    }
}