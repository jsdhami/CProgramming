/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define f(x) = sin(x) - 1 - x^3 and f'(x) = cos(x) - 3x^2
 * 3. Prompt user for initial guess and error tolerance
 * 4. Apply Newton-Raphson method:
 *        - Calculate x_new = x - f(x) / f'(x)
 *        - If |f(x_new)| < tolerance, stop
 *        - Otherwise, set x = x_new and repeat
 * 5. Display the root
 * 6. Stop
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
	return sin(x) - 1 - x * x * x;
}

double f_prime(double x) {
	return cos(x) - 3 * x * x;
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	double x, x_new, tolerance;

	printf("Equation: sin(x) = 1 + x^3\n");
	printf("Enter initial guess: ");
	scanf("%lf", &x);

	printf("Enter error tolerance: ");
	scanf("%lf", &tolerance);

	while (1) {
		x_new = x - f(x) / f_prime(x);

		if (fabs(f(x_new)) < tolerance)
			break;

		x = x_new;
	}

	printf("Root: %.6lf\n", x_new);

	return 0;
}
