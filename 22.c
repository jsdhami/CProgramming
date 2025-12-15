/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for number of terms
 * 3. Read n
 * 4. Generate Fibonacci sequence using recursive function
 * 5. Display each term
 * 6. Calculate sum of all terms
 * 7. Display sum
 * 8. Stop
 */

#include <stdio.h>

int fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n, sum = 0;

	printf("Enter number of terms: ");
	scanf("%d", &n);

	printf("Fibonacci sequence: ");
	for (int i = 0; i < n; i++) {
		int term = fibonacci(i);
		printf("%d ", term);
		sum += term;
	}

	printf("\nSum: %d\n", sum);

	return 0;
}
