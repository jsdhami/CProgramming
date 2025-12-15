/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for number of rows
 * 3. Read n
 * 4. For each row i from 0 to n-1:
 *        - Print leading spaces for formatting
 *        - Calculate and print binomial coefficients C(i,j) for j=0 to i
 *        - Use formula: C(i,j) = C(i,j-1) * (i-j+1) / j
 * 5. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n;

	printf("Enter number of rows: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int val = 1;
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("%d ", val);
			val = val * (i - j) / (j + 1);
		}
		printf("\n");
	}

	return 0;
}
