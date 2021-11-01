/******************************************
                INCLUDES
********************************************/
#include "stack.h"

/******************************************
          FUNCTION IMPLEMENTATIONS
********************************************/

/**
 * \name createStack
 * \brief Creates and returns an empty stack of integers with maximum 'capacity'.
 * \param capacity The capacity of the stack.
 * \example Stack S = createStack(10);
 * \return stack The pointer to a stack.
 */
Stack createStack(int capacity)
{
    Stack stack = malloc(sizeof(Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->items = malloc(capacity*(sizeof(Item)));
    return stack;
}

/**
 * \name isEmpty
 * \brief Returns true if the Stack is empty and false otherwise.
 * \param S The pointer to a stack to be tested.
 * \example int stackIsEmpty = isEmpty(Stack);
 * \return True -> Stack is empty, False -> Stack is not empty
 */
int isEmpty(Stack S)
{
    if (S->top == -1) { return 1; }
    else { return 0; }
}

/**
 * \name isFull
 * \brief Returns true if the Stack is completely full and false otherwise.
 * \param S The pointer to a stack to be tested.
 * \example int stackIsFull = isFull(Stack);
 * \return True -> Stack is completely full, False -> Stack is not completely full
 */
int isFull(Stack S)
{
    if (S->top == S->capacity-1) { return 1; }
    else { return 0; }
}

/**
 * \name push
 * \brief Add a new item at the top of the stack.
 * \param S The pointer to the stack to be updated.
 * \param item The item to be pushed into the stack.
 * \example push(15, Stack);
 * \return void
 */
void push(Stack S, Item item)
{
    if (isFull(S))
    {
        printf("The stack is full!\n");
        abort();
    }
    else
    {
        S->top++;
        S->items[S->top] = item;
    }
}

/**
 * \name pop
 * \brief Removes and returns the item at the top of the stack.
 * \param S The pointer to a stack to be poped.
 * \example Item itemAtTheTop = pop(Stack);
 * \return stackTopItem The item at the top of the stack.
 */
Item pop(Stack S)
{
    if (isEmpty(S))
    {
        printf("The stack is empty!\n");
        abort();
    }
    else
    {
        Item stackTopItem = S->items[S->top];
        S->top--;
        return stackTopItem;
    }
}

/**
 * \name peek
 * \brief Returns the item at the top of the stack.
 * \param S The pointer to a stack to be verified.
 * \example int itemAtTheTop = top(Stack);
 * \return The item at the top of the stack.
 */
Item peek(Stack S)
{
    if (isEmpty(S))
    {
        printf("The stack is empty!\n");
        abort();
    }
    else
    {
        return S->items[S->top];
    }
}

/**
 * \name destroys
 * \brief Destroys the stack.
 * \param *S The pointer (address) of the stack to be destroyed (*S is a pointer of pointer).
 * \example destroys(&Stack);
 * \return void
 */
void destroys(Stack *S)
{
    free((*S)->items);
    free(*S);
    *S = NULL;
}

/**
 * \name size
 * \brief Returns the quantity of items into the stack.
 * \param S The pointer to a stack to be verified.
 * \example int qtyOfItems = quantityOfItems(Stack);
 * \return Quantity of items.
 */
int size(Stack S)
{
    return S->top+1;
}

/**
 * \name showItems
 * \brief Prints in the console the items into the stack.
 * \param S The pointer to a stack to be tested.
 * \example showItems(Stack);
 * \return void
 */
void showItems(Stack S)
{
    int count = size(S) - 1;

    for (; count >= 0; count--)
    {
        if (count == (size(S) - 1))
        {
            printf("[ %d ]  (Top)\n", S->items[count]);
        }
        else
        {
            printf("[ %d ]\n", S->items[count]);
        }
    }
}

/**
 * \name clear
 * \brief Clear the contents of the stack.
 * \param S The pointer to a stack to be cleared.
 * \example clear(Stack);
 * \return void
 */
void clear(Stack S)
{
    S->top = -1;
}
