/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for count of numbers
 * 3. Read n
 * 4. Read n numbers into array
 * 5. Find HCF by repeatedly applying GCD:
 *        - Start with first number
 *        - Find GCD with each subsequent number
 * 6. Display the HCF
 * 7. Stop
 */

#include <stdio.h>

int gcd(int a, int b) {
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n, nums[100];

	printf("Enter count of numbers: ");
	scanf("%d", &n);

	printf("Enter %d numbers:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	int result = nums[0];
	for (int i = 1; i < n; i++) {
		result = gcd(result, nums[i]);
	}

	printf("HCF: %d\n", result);

	return 0;
}
