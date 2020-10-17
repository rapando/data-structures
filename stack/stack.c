//
// Created by sam on 10/8/20.
// Reference https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "stack.h"

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

void stackEntry()
{
    printf("\n\n******* Stacks ******* \n");

    struct Stack *stack = createStack(10);
    pushToStack(stack, 1234);
    pushToStack(stack, 43232);
    printf("%d popped from stack\n", pop(stack));
    printf("The top item on stack : %d\n", peek(stack));
}

/*
 * Create a stack of the specified capacity
*/
struct Stack *createStack(unsigned capacity)
{
    printf("Creating stack of capacity : %d\n", capacity);
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    printf("Created empty stack of capacity : %d\n", capacity);
    return stack;
}

/*
 * Stack is full if top value is equal to the last index
*/
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

/*
 * Stack is empty if top is -1
*/
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

/*
 * Add item to stack and increase the value of top by 1
*/
void pushToStack(struct Stack *stack, int item)
{
    printf("Pushing %d to stack\n", item);   
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

/*  
 * Remove the top item from stack
*/
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}

/*
 * Return the top item without removing it
*/
int peek(struct Stack *stack) {
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top];
}