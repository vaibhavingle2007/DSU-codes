#include <stdio.h>
#include <stdlib.h>

// Recursive function to multiply two numbers
int recursiveMultiply(int a, int b) {
    // Base cases
    // If any number is 0, result is 0
    if (b == 0) {
        return 0;
    }
    
    // If b is positive
    if (b > 0) {
        return a + recursiveMultiply(a, b - 1);
    }
    
    // If b is negative
    // Handle negative multiplication
    return -recursiveMultiply(a, -b);
}

// Function to handle different multiplication scenarios
int multiply(int a, int b) {
    // Special cases
    if (a == 0 || b == 0) {
        return 0;
    }
    
    // Call recursive multiplication function
    return recursiveMultiply(a, b);
}

// Main function to demonstrate recursive multiplication
int main() {
    int num1, num2;
    char choice;
    
    while (1) {
        // Input two numbers
        printf("Enter first number: ");
        scanf("%d", &num1);
        
        printf("Enter second number: ");
        scanf("%d", &num2);
        
        // Perform multiplication
        int result = multiply(num1, num2);
        
        // Display result
        printf("\nMultiplication Result:");
        printf("\n%d * %d = %d\n", num1, num2, result);
        
        // Ask if user wants to continue
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
        
        // Exit condition
        if (choice != 'y' && choice != 'Y') {
            break;
        }
        
        // Clear screen for next iteration
        printf("\n");
    }
    
    return 0;
}
