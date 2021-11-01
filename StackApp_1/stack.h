#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

/******************************************
                INCLUDES
********************************************/
#include "main.h"

/******************************************
                 DEFINES
********************************************/

/******************************************
                 TYPEDEFS
********************************************/
typedef char Item;

/******************************************
                  ENUMS
********************************************/

/******************************************
                STRUCTURES
********************************************/
typedef struct stack
{
    // The lenght of the stack
    int capacity;

    // The position of the highest item
    int top;

    // The pointer that pointers to the dynamic array of items
    Item *items;

} *Stack; // The pointer that pointers to the structure stackOfIntegers

/******************************************
         FUNCTION PROTOTYPES
********************************************/
Stack createStack(int capacity);
int isEmpty(Stack S);
int isFull(Stack S);
void push(Stack S, Item item);
Item pop(Stack S);
Item peek(Stack S);
void destroys(Stack *S);
int size(Stack S);
void showItems(Stack S);
void clear(Stack S);

#endif // STACK_H_INCLUDED
