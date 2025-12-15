/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for initial count of numbers
 * 3. Allocate memory using malloc
 * 4. Read numbers into allocated memory
 * 5. Prompt for additional count
 * 6. Reallocate memory using realloc
 * 7. Read additional numbers
 * 8. Display all numbers
 * 9. Free memory
 * 10. Stop
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n1, n2;

	printf("Enter initial count: ");
	scanf("%d", &n1);

	int *nums = (int *)malloc(n1 * sizeof(int));

	if (nums == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter %d numbers:\n", n1);
	for (int i = 0; i < n1; i++) {
		scanf("%d", &nums[i]);
	}

	printf("Enter additional count: ");
	scanf("%d", &n2);

	nums = (int *)realloc(nums, (n1 + n2) * sizeof(int));

	if (nums == NULL) {
		printf("Memory reallocation failed.\n");
		return 1;
	}

	printf("Enter %d more numbers:\n", n2);
	for (int i = n1; i < n1 + n2; i++) {
		scanf("%d", &nums[i]);
	}

	printf("All numbers: ");
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");

	free(nums);

	return 0;
}
