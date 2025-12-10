/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a number
 * 3. Read num
 * 4. Compute sum of proper divisors of num
 * 5. If sum equals num:
 *        - Display that num is a perfect number
 *    Else:
 *        - Display that num is not a perfect number
 * 6. Prompt user for two limits: low and high
 * 7. Read low and high
 * 8. For each i from low to high:
 *        - Compute sum of proper divisors of i
 *        - If sum equals i, display i as a perfect number
 * 9. Stop
 */

#include <stdio.h>

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

    int num, low, high, i, j, sum;

    // Part 1: Check if a single number is perfect
    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;
    for (i = 1; i <= num/2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    // Part 2: Display perfect numbers in a range
    printf("\nEnter two numbers (low high): ");
    scanf("%d %d", &low, &high);

    printf("Perfect numbers between %d and %d:\n", low, high);

    for (i = low; i <= high; i++) {
        sum = 0;
        for (j = 1; j <= i/2; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
