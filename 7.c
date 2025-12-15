/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a number
 * 3. Read num
 * 4. Check if num is Armstrong:
 *        - Count the number of digits in num
 *        - Calculate the sum of each digit raised to the power of digit count
 *        - If sum equals num: Armstrong
 *        - Otherwise: not Armstrong
 * 5. Display whether num is Armstrong or not
 * 6. Prompt user for two limits: low and high
 * 7. Read low and high
 * 8. For each i from low to high:
 *        - Apply the same Armstrong checking logic
 *        - If i is Armstrong, display i
 * 9. Stop
 */

#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    if (num < 0)
        return 0;
    
    int originalNum = num;
    int digitCount = countDigits(num);
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

    int num, low, high, i;

    // Part 1: Check if a single number is Armstrong
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    // Part 2: Display Armstrong numbers in a range
    printf("\nEnter two numbers (low high): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d:\t", low, high);

    for (i = low; i <= high; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
