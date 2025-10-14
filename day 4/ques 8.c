#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
