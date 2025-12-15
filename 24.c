/*
 * Algorithm (high level):
 * 1. Start
 * 2. Allocate memory for two numbers using calloc
 * 3. Prompt user for two numbers
 * 4. Read the numbers into allocated memory
 * 5. Calculate sum
 * 6. Display the sum
 * 7. Free allocated memory
 * 8. Stop
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int *nums = (int *)calloc(2, sizeof(int));

	if (nums == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter two numbers: ");
	scanf("%d %d", &nums[0], &nums[1]);

	int sum = nums[0] + nums[1];

	printf("Sum: %d\n", sum);

	free(nums);

	return 0;
}
