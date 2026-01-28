#include <stdio.h>

#define MAX 10     // Maximum size of stack

int stack[MAX];    // Stack array
int top = -1;      // Stack is empty when top = -1

// Function to push element into stack
void push() {
    int item;

    // Check stack overflow condition
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push element.");
    } else {
        printf("\nEnter the element to push: ");
        scanf("%d", &item);

        top = top + 1;          // Increase top
        stack[top] = item;      // Insert element

        printf("Element pushed successfully.");
    }
}

// Function to pop element from stack
void pop() {

    // Check stack underflow condition
    if (top == -1) {
        printf("\nStack Underflow! Stack is empty.");
    } else {
        printf("\nPopped element: %d", stack[top]);
        top = top - 1;          // Decrease top
    }
}

// Function to display top element
void peek() {

    if (top == -1) {
        printf("\nStack is empty. No top element.");
    } else {
        printf("\nTop element is: %d", stack[top]);
    }
}

// Function to display stack elements
void display() {
    int i;

    if (top == -1) {
        printf("\nStack is empty.");
    } else {
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main() {
    int choice;

    do {
        printf("\n\n----- STACK OPERATIONS MENU -----");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("\nExiting program.");
                break;

            default:
                printf("\nInvalid choice! Please try again.");
        }

    } while (choice != 5);

    return 0;
}


//stack[MAX] ? array to store stack elements
//
//top ? keeps track of last inserted element
//
//Push increases top and adds element
//
//Pop removes element and decreases top
//
//Peek shows element at top
//
//Display prints all elements from top to bottom
