/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a number
 * 3. Read num
 * 4. Check if num is prime:
 *        - If num <= 1: not prime
 *        - If num == 2: prime
 *        - For i from 2 to sqrt(num):
 *            - If num is divisible by i: not prime
 *        - Otherwise: prime
 * 5. Display whether num is prime or not
 * 6. Prompt user for two limits: low and high
 * 7. Read low and high
 * 8. For each i from low to high:
 *        - Apply the same prime checking logic
 *        - If i is prime, display i
 * 9. Stop
 */

#include <stdio.h>

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

    int num, low, high, i, j, isPrime;

    // Part 1: Check if a single number is prime
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else if (num == 2) {
        isPrime = 1;
    } else {
        isPrime = 1;
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }



    
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // Part 2: Display prime numbers in a range
    printf("\nEnter two numbers (low high): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d:\t", low, high);

    for (i = low; i <= high; i++) {
        if (i <= 1) {
            continue;
        } else if (i == 2) {
            printf("%d ", i);
        } else {
            isPrime = 1;
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
