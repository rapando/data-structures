//
// Created by sam on 10/8/20.
//

#ifndef DATA_STRUCTURES_LINKED_LISTS_H
#define DATA_STRUCTURES_LINKED_LISTS_H

void linkedListsEntry();

struct node *createLinkedList();

void traverseLinkedList(struct node *head);

void searchItem(struct node *head, int item);

void deleteItem(struct node **head, int item);

void push(struct node *head, int item);

#endif //DATA_STRUCTURES_LINKED_LISTS_H
