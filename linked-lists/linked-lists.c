//
// Created by sam on 10/8/20.
//
#include <stdio.h>
#include <stdlib.h>

#include "linked-lists.h"

struct node
{
    int data;
    struct node *next;
};

// Entry Function
void linkedListsEntry()
{
    printf("******* Linked Lists ******* \n");
    struct node *headNode = createLinkedList();
    traverseLinkedList(headNode);
    searchItem(headNode, 3);
    deleteItem(&headNode, 3);
    traverseLinkedList(headNode);
}

struct node *createLinkedList()
{
    // Create a linked list with 10 items and return the head only
    printf("Creating a linked list with 10 items...\n");

    struct node *headNode, *currentNode, *temp;

    for (int i = 0; i < 10; i++)
    {
        currentNode = (struct node *)malloc(sizeof(struct node));
        currentNode->data = i;
        if (i == 0)
        {
            headNode = temp = currentNode;
        }
        else
        {
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
void traverseLinkedList(struct node *head)
{
    printf("\nTraversing linked list\n");
    while (head != NULL)
    {
        printf("[%d] -> ", head->data);
        head = head->next;
    }
    printf(" NULL\n");
}

/*
 * Search for an item in the linked list
 * You have to traverse the list and get the item
*/
void searchItem(struct node *head, int item)
{
    int position = 0;
    printf("\nSearching for %d from the linked list\n", item);
    while (head != NULL)
    {
        if (head->data == item)
        {
            printf("Found at position %d\n", position);
            break;
        }
        position++;
        head = head->next;
    }
    printf("Done searching for %d in the linked list\n-----\n", item);
}

/*
 * Go through the linked list and delete an item if found
*/
void deleteItem(struct node **head, int item)
{
    printf("\nDelete %d from the linked list\n", item);

    struct node *temp = *head;
    struct node *prev = NULL;

    if (!head || !(*head))
    {
        printf("Linked list is empty\n");
        return;
    }

    while (temp->data != item && temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp->data == item)
    {
        if (prev)
            prev->next = temp->next;
        else
            *head = temp->next;
        free(temp);
        printf("%d deleted\n", item);
        return;
    }
    printf("%d not found so not deleted\n", item);
}

/*
 * Push an item to the end of the linked list
 * Traverse the linked list and push item to the end
*/
void push(struct node *head, int item)
{
    printf("\nPush %d at the end of the linked list\n", item);
    struct node *newNode;
    while (head->next != NULL)
        head = head->next;
    // we have reached the end
    newNode->data = item;
    head->next = newNode;
    printf("Done pushing %d at the end of the list\n", item);
}