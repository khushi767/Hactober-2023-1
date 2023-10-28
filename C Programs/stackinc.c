#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push %d.\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a sentinel value to indicate an empty stack
    } else {
        int popped = stack[top--];
        return popped;
    }
}

// Function to display the elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                element = pop();
                if (element != -1) {
                    printf("Popped element: %d\n", element);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
