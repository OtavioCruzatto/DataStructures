/******************************************
                INCLUDES
********************************************/
#include "main.h"

/******************************************
            GLOBAL VARIABLES
********************************************/

/******************************************
          FUNCTION PROTOTYPES
********************************************/

/******************************************
          FUNCTION IMPLEMENTATIONS
********************************************/
int main()
{
    printf("Stack tests:\n\n");

    int numbersOfItems = 5;
    printf("Creating a stack of integers 'S' with capacity for %d items!\n\n", numbersOfItems);
    Stack S = createStack(numbersOfItems);

    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Pushing three items into stack 'S'!\n");
    push(S, 10);
    push(S, 15);
    push(S, 20);

    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Pushing more two items into stack 'S'!\n");
    push(S, 25);
    push(S, 30);

    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Showing the top item of the stack 'S' and removing it! ---> Item: %d\n", pop(S));
    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Showing the top item of the stack 'S' without removing it! ---> Item: %d\n", peek(S));
    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Clearing the stack 'S'!\n");
    clear(S);
    printf("Quantity of items in stack 'S': %d\n", size(S));
    printf("Items into the stack 'S':\n");
    showItems(S);
    printf("The stack is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(S));
    printf("The stack is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(S));
    printf("\n");

    printf("Destroying the stack 'S'!\n");
    destroys(&S);
    printf("From this moment will not be possible to use the stack 'S'!\n");

    return 0;
}
