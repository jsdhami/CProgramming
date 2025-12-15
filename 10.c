/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a decimal number
 * 3. Read the number (double)
 * 4. Convert to fraction:
 *        - Multiply by a power of 10 (here 1,000,000) to shift decimals
 *        - Round to nearest integer to form numerator
 *        - Denominator is the same power of 10
 *        - Reduce numerator/denominator by their GCD
 * 5. Display the simplified fraction
 * 6. Stop
 */

#include <stdio.h>

long long gcd_ll(long long a, long long b) {
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;

	while (b != 0) {
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a == 0 ? 1 : a;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	double num;
	const long long scale = 1000000LL; // precision: up to 6 decimal places

	printf("Enter a decimal number: ");
	scanf("%lf", &num);

	// Form numerator with rounding to nearest integer
	long long numerator = (long long)(num * scale + (num >= 0 ? 0.5 : -0.5));
	long long denominator = scale;

	long long g = gcd_ll(numerator, denominator);
	numerator /= g;
	denominator /= g;

	printf("Fraction: %lld/%lld\n", numerator, denominator);

	return 0;
}
