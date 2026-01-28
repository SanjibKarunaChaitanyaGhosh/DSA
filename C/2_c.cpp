//2(c) C Program: Convert Infix Expression to Postfix (using Stack)
//Input-- Infix  : A+B*(C-D)


#include <stdio.h>
#include <ctype.h>   // for isalnum()

#define MAX 100




char stack[MAX];
int top = -1;

/* Push into stack */
void push(char ch)
{
    top++;
    stack[top] = ch;
}

/* Pop from stack */
char pop()
{
    return stack[top--];
}

/* Check priority of operators */
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;

    return 0;
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    char temp;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        /* If operand (letter or digit), add to postfix */
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }
        /* If opening bracket */
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        /* If closing bracket */
        else if (infix[i] == ')')
        {
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();  // Remove '('
        }
        /* If operator */
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(infix[i]))
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    /* Pop remaining operators from stack */
    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}

