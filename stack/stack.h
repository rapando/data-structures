//
// Created by sam on 10/8/20.
//

#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H

void stackEntry();

struct Stack *createStack(unsigned capacity);

int isFull(struct Stack *stack);

int isEmpty(struct Stack *stack);

void pushToStack(struct Stack *stack, int item);

int pop(struct Stack *stack);

int peek(struct Stack *stack);


#endif //DATA_STRUCTURES_STACK_H
