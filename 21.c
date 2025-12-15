/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for n (total things) and r (things taken at a time)
 * 3. Read n and r
 * 4. Calculate permutation: P(n,r) = n! / (n-r)!
 * 5. Calculate combination: C(n,r) = n! / (r! * (n-r)!)
 * 6. Display permutation and combination
 * 7. Stop
 */

#include <stdio.h>

long long factorial(int n) {
	long long fact = 1;
	for (int i = 2; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n, r;

	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);

	if (r > n || r < 0 || n < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	long long perm = factorial(n) / factorial(n - r);
	long long comb = factorial(n) / (factorial(r) * factorial(n - r));

	printf("Permutation P(%d,%d): %lld\n", n, r, perm);
	printf("Combination C(%d,%d): %lld\n", n, r, comb);

	return 0;
}
