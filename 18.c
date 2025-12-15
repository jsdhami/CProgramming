/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for number of rows
 * 3. Read n
 * 4. Initialize counter to 1
 * 5. For each row i from 1 to n:
 *        - Print counter, increment counter
 *        - Repeat for i times
 * 6. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n, num = 1;

	printf("Enter number of rows: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}

	return 0;
}


