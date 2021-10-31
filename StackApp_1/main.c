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
char* toPostfix(char *infixExpression);

/******************************************
          FUNCTION IMPLEMENTATIONS
********************************************/

int main()
{
    char infixExpression[256];

    printf("Stack application - Infix to Postfix converter!\n\n");

    printf("Type an expression in the infix form (with all parentheses): ");
    scanf("%s", infixExpression);
    printf("Expression typed: %s\n", infixExpression);

    printf("Expression in postfix form: %s\n", toPostfix(infixExpression));

    return 0;
}

/**
 * \name toPostfix
 * \brief Converts the received expression from infix to postfix form.
 * \param infixExpression The string with the expression in infix form.
 * \example strcpy(postfixExpression, toPostfix(infixExpression));
 * \return postfixExpression The address of the formatted string.
 */
char* toPostfix(char *infixExpression)
{
    static char postfixExpression[256];
    int infixExpressionLenght = strlen(infixExpression);
    int infixExpressionIndex = 0;
    int postfixExpressionIndex = 0;

    Stack operatorsStack = createStack(256);

    for (infixExpressionIndex = 0; infixExpressionIndex < infixExpressionLenght; infixExpressionIndex++)
    {
        if (isdigit(infixExpression[infixExpressionIndex]) != 0)
        {
            postfixExpression[postfixExpressionIndex] = infixExpression[infixExpressionIndex];
            postfixExpressionIndex++;
        }
        else if (strchr("*/+-", infixExpression[infixExpressionIndex]))
        {
            push(operatorsStack, infixExpression[infixExpressionIndex]);
        }
        else if (strchr(")", infixExpression[infixExpressionIndex]))
        {
            postfixExpression[postfixExpressionIndex] = pop(operatorsStack);
            postfixExpressionIndex++;
        }
    }

    postfixExpression[postfixExpressionIndex] = '\0';
    destroys(&operatorsStack);
    return postfixExpression;
}
