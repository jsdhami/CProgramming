/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a number
 * 3. Read num
 * 4. Check if num is Strong:
 *        - For each digit, compute its factorial and accumulate the sum
 *        - If sum equals num: Strong
 *        - Otherwise: not Strong
 * 5. Display whether num is Strong or not
 * 6. Prompt user for two limits: low and high
 * 7. Read low and high
 * 8. For each i from low to high:
 *        - Apply the same Strong checking logic
 *        - If i is Strong, display i
 * 9. Stop
 */

#include <stdio.h>

int factorial(int n) {
	int fact = 1;
	for (int i = 2; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

int isStrong(int num) {
	if (num < 0)
		return 0;

	int originalNum = num;
	int sum = 0;

	while (num > 0) {
		int digit = num % 10;
		sum += factorial(digit);
		num /= 10;
	}

	return sum == originalNum;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int num, low, high, i;

	// Part 1: Check if a single number is Strong
	printf("Enter a number: ");
	scanf("%d", &num);

	if (isStrong(num))
		printf("%d is a Strong number.\n", num);
	else
		printf("%d is not a Strong number.\n", num);

	// Part 2: Display Strong numbers in a range
	printf("\nEnter two numbers (low high): ");
	scanf("%d %d", &low, &high);

	printf("Strong numbers between %d and %d:\t", low, high);

	for (i = low; i <= high; i++) {
		if (isStrong(i))
			printf("%d ", i);
	}

	printf("\n");

	return 0;
}
