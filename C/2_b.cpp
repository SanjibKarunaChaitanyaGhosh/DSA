//2(b) C Program: Check whether parentheses are properly arranged (using Stack)
//
//Examples

//{[()()]} ? Properly arranged

//{[(])} ? Not properly arranged

//Logic (Very Simple)
//
//Use a stack (array)
//
//Push opening brackets ( { [
//
//When closing bracket comes:
//
//Pop from stack
//
//Check if it matches
//
//If stack empty at end ? Correct

//



#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Function to push element into stack */
void push(char ch)
{
    top++;
    stack[top] = ch;
}

/* Function to pop element from stack */
char pop()
{
    char ch = stack[top];
    top--;
    return ch;
}

/* Function to check matching brackets */
int isMatching(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;

    return 0;
}

int main()
{
    char exp[MAX];
    int i;
    char temp;

    printf("Enter an expression: ");
    scanf("%s", exp);

    for (i = 0; exp[i] != '\0'; i++)
    {
        /* If opening bracket, push into stack */
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        /* If closing bracket */
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            /* If stack empty, no matching opening */
            if (top == -1)
            {
                printf("Not Properly Arranged\n");
                return 0;
            }

            temp = pop();

            /* Check whether brackets match */
            if (!isMatching(temp, exp[i]))
            {
                printf("Not Properly Arranged\n");
                return 0;
            }
        }
    }

    /* If stack empty at end */
    if (top == -1)
        printf("Properly Arranged\n");
    else
        printf("Not Properly Arranged\n");

    return 0;
}

