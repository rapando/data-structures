#include <stdio.h>
#include <stdlib.h>

#include "linked-lists/linked-lists.h"

void menu();

int main()
{
    int menuOption;
    menu();
    scanf("%d", &menuOption);
   
    switch (menuOption)
    {
    case 1:
        linkedListsEntry();
        break;

    case 0:
        exit(0);
        break;

    default:
        printf("\n*** Invalid Option ***\n");
        break;
    }

    return 0;
}

void menu()
{
    printf("Data Structures Demo in C!\n\n");
    printf("** Choose Menu Option **\n\n");
    printf("\t1. Linked Lists\n");
    printf("\t0. Quit");
    printf("\n _ ");
}
