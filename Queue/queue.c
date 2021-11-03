/******************************************
                INCLUDES
********************************************/
#include "queue.h"

/******************************************
          FUNCTION IMPLEMENTATIONS
********************************************/

Queue createQueue(int capacity)
{
    Queue Q = malloc(sizeof(struct queue));
    Q->capacity = capacity;
    Q->front = 0;
    Q->rear = 0;
    Q->size = 0;
    Q->items = malloc(capacity*(sizeof(Item)));
    return Q;
}

int isEmpty(Queue Q)
{
    int isEmpty = 0;
    if (Q->size == 0) isEmpty = 1;
    else isEmpty = 0;
    return isEmpty;
}

int isFull(Queue Q)
{
    int isFull = 0;
    if (Q->size == Q->capacity) isFull = 1;
    else isFull = 0;
    return isFull;
}

void enqueue(Queue Q, Item item)
{
    if (isFull(Q))
    {
        printf("The queue is full!\n");
        abort();
    }
    else
    {
        Q->items[Q->rear] = item;
        next(Q->rear);
        Q->size++;
    }
}

Item dequeue(Queue Q)
{
    if (isEmpty(Q))
    {
        printf("The queue is empty!\n");
        abort();
    }
    else
    {
        Item dequeuedItem = Q->items[Q->front];
        next(Q->front);
        Q->size--;
        return dequeuedItem;
    }
}

Item peek(Queue Q)
{
    if (isEmpty(Q))
    {
        printf("The queue is empty!\n");
        abort();
    }
    else
    {
        Item peekedItem = Q->items[Q->front];
        return peekedItem;
    }
}

void destroys(Queue *Q)
{
    free((*Q)->items);
    free(*Q);
    *Q = NULL;
}

int size(Queue Q)
{
    return Q->size;
}

void showItems(Queue Q)
{
    if (!isEmpty(Q))
    {
        int count = 0;
        int qtyItems = size(Q);

        printf("[ (FRONT) ");
        for (count = 0; count < qtyItems; count++)
        {
            int index = ((count + Q->front) % Q->capacity);
            printf(" %d ", Q->items[index]);
        }
        printf(" (REAR) ]\n");
    }
}

void clear(Queue Q)
{
    Q->front = 0;
    Q->rear = 0;
    Q->size = 0;
}


