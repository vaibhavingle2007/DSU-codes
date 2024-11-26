#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100  // Maximum size of the stack

// Structure to represent the stack
typedef struct {
    int items[MAX_SIZE];  // Array to store stack elements
    int top;              // Index of the top element
} Stack;

// Function prototypes
void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void display(Stack *s);

// Initialize the stack
void initStack(Stack *s) {
    s->top = -1;  // Stack is empty when top is -1
}

// Check if stack is empty
int isEmpty(Stack *s) {
    return (s->top == -1);
}

// Check if stack is full
int isFull(Stack *s) {
    return (s->top == MAX_SIZE - 1);
}

// Push an element to the stack
void push(Stack *s, int value) {
    // Check for stack overflow
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    
    // Increment top and add the element
    s->top++;
    s->items[s->top] = value;
    printf("Pushed %d to the stack\n", value);
}

// Pop an element from the stack
int pop(Stack *s) {
    // Check for stack underflow
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop element\n");
        return -1;
    }
    
    // Get the top element and decrement top
    int poppedItem = s->items[s->top];
    s->top--;
    printf("Popped %d from the stack\n", poppedItem);
    return poppedItem;
}

// Peek at the top element without removing
int peek(Stack *s) {
    // Check if stack is empty
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    
    // Return the top element
    return s->items[s->top];
}

// Display all elements in the stack
void display(Stack *s) {
    // Check if stack is empty
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    
    // Print stack elements
    printf("Stack elements:\n");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Main function to demonstrate stack operations
int main() {
    Stack stack;  // Declare stack
    
    // Initialize the stack
    initStack(&stack);
    
    // Demonstrate push operation
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    // Display stack contents
    display(&stack);
    
    // Demonstrate peek operation
    printf("Top element: %d\n", peek(&stack));
    
    // Demonstrate pop operation
    pop(&stack);
    pop(&stack);
    
    // Display updated stack
    display(&stack);
    
    return 0;
}
