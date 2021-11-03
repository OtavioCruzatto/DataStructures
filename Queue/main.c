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
    printf("Queue tests:\n\n");

    int numbersOfItems = 5;
    printf("Creating a queue of integers 'Q' with capacity for %d items!\n\n", numbersOfItems);
    Queue Q = createQueue(numbersOfItems);

    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Enqueuing three items into queue 'Q'!\n");
    enqueue(Q, 10);
    enqueue(Q, 15);
    enqueue(Q, 20);

    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Enqueuing more two items into queue 'Q'!\n");
    enqueue(Q, 25);
    enqueue(Q, 30);

    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Showing the first item of the queue 'Q' and removing it! ---> Item: %d\n", dequeue(Q));
    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Showing the first item of the queue 'Q' without removing it! ---> Item: %d\n", peek(Q));
    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Clearing the queue 'Q'!\n");
    clear(Q);
    printf("Quantity of items in queue 'Q': %d\n", size(Q));
    printf("Items into the queue 'Q':\n");
    showItems(Q);
    printf("The queue is empty? [ 0:No | 1:Yes ] ---> Answer: %d\n", isEmpty(Q));
    printf("The queue is full?  [ 0:No | 1:Yes ] ---> Answer: %d\n", isFull(Q));
    printf("\n");

    printf("Destroying the queue 'Q'!\n");
    destroys(&Q);
    printf("From this moment will not be possible to use the queue 'Q'!\n");

    return 0;
}
