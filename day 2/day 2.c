#include <stdio.h>

int main() {
    float num1, num2;  // use float to handle decimal division
    float sum, difference, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check if second number is not zero before dividing
    if (num2 != 0)
        quotient = num1 / num2;
    else {
        printf("Division by zero is not allowed.\n");
        return 1; // exit program if divide by zero
    }

    // Display results
    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
