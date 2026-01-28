// 2(d) C Program: Evaluate Postfix Expression using Stack

#include <stdio.h>
#include <ctype.h>   // for isdigit()

// 23*54*+9-

#define MAX 100

int stack[MAX];
int top = -1;

/* Function to push value into stack */
void push(int value)
{
    top++;
    stack[top] = value;
}

/* Function to pop value from stack */
int pop()
{
    int value = stack[top];
    top--;
    return value;
}

int main()
{
    char postfix[MAX];
    int i;
    int op1, op2, result;

    printf("Enter postfix expression (single digit operands): ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        /* If operand (digit), push into stack */
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');  // convert char to int
        }
        /* If operator */
        else
        {
            /* Pop two operands */
            op2 = pop();
            op1 = pop();

            /* Perform operation */
            switch (postfix[i])
            {
                case '+':
                    result = op1 + op2;
                    break;

                case '-':
                    result = op1 - op2;
                    break;

                case '*':
                    result = op1 * op2;
                    break;

                case '/':
                    result = op1 / op2;
                    break;
            }

            /* Push result back to stack */
            push(result);
        }
    }

    /* Final result is on top of stack */
    printf("Result of postfix expression = %d\n", pop());

    return 0;
}

