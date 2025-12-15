/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for two numbers (a, b)
 * 3. Read a and b
 * 4. Compute HCF (GCD) using Euclid's algorithm
 * 5. Compute LCM using: lcm = |a * b| / hcf
 * 6. Display HCF and LCM
 * 7. Stop
 */

#include <stdio.h>

int gcd(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// Ensure positive values for the Euclidean algorithm
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

int lcm(int a, int b) {
	if (a == 0 || b == 0)
		return 0;

	int h = gcd(a, b);
	return (a / h) * b; // divide first to reduce overflow risk
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int a, b;

	printf("Enter two numbers (a b): ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	int h = gcd(a, b);
	int l = lcm(a, b);

	printf("HCF (GCD) of %d and %d: %d\n", a, b, h);
	printf("LCM of %d and %d: %d\n", a, b, l);

	return 0;
}
