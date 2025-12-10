/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user to enter a number
 * 3. Read the number (num)
 * 4. Initialize reverse = 0
 * 5. While num > 0:
 *      - Extract last digit: digit = num % 10
 *      - Update reverse: reverse = reverse * 10 + digit
 *      - Remove last digit from num: num = num / 10
 * 6. Display the reversed number
 * 7. Stop
 */

#include <stdio.h>

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

    int num, originalNum, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store original number

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reverse of %d is %d\n", originalNum, reverse);

    return 0;
}
