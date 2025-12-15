/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define function f(x) = x^3 - 9x + 1
 * 3. Prompt user for interval [a, b] and error tolerance
 * 5. Apply bisection method:
 *        - Find midpoint c = (a + b) / 2
 *        - If |f(c)| < tolerance or |b - a| < tolerance, stop
 *        - If f(a) and f(c) have opposite signs, set b = c
 *        - Otherwise, set a = c
 * 6. Display the root
 * 7. Stop
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
	return x * x * x - 9 * x + 1;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	double a, b, c, tolerance;

	printf("Equation: x^3 - 9x + 1 = 0\n");
	printf("Enter interval [a, b]: ");
	scanf("%lf %lf", &a, &b);

	printf("Enter error tolerance: ");
	scanf("%lf", &tolerance);

	while (fabs(b - a) >= tolerance) {
		c = (a + b) / 2;

		if (fabs(f(c)) < tolerance)
			break;

		if (f(a) * f(c) < 0)
			b = c;
		else
			a = c;
	}

	printf("Root: %.6lf\n", c);

	return 0;
}
