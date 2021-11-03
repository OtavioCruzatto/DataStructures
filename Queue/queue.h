#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

/******************************************
                INCLUDES
********************************************/
#include "main.h"

/******************************************
                 DEFINES
********************************************/
#define next(index) (index = ((index+1) % Q->capacity))

/******************************************
                 TYPEDEFS
********************************************/
typedef int Item;

/******************************************
                  ENUMS
********************************************/

/******************************************
                STRUCTURES
********************************************/
typedef struct queue
{
    // The lenght of the queue
    int capacity;

    // The position of the first item
    int front;

    // The position of the last item
    int rear;

    // The quantity of items
    int size;

    // The pointer that pointers to the dynamic array of items
    Item *items;

} *Queue; // The pointer that pointers to the structure queue

/******************************************
         FUNCTION PROTOTYPES
********************************************/
Queue createQueue(int capacity);
int isEmpty(Queue Q);
int isFull(Queue Q);
void enqueue(Queue Q, Item item);
Item dequeue(Queue Q);
Item peek(Queue Q);
void destroys(Queue *Q);
int size(Queue Q);
void showItems(Queue Q);
void clear(Queue Q);

#endif // QUEUE_H_INCLUDED
