/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define f(x) = sqrt(1 + x^3)
 * 3. Set limits: a = 0, b = pi/2
 * 4. Prompt user for number of sub-intervals n (must be even)
 * 5. Calculate step size h = (b - a) / n
 * 6. Apply Simpson's 1/3 rule:
 *        - sum = f(a) + f(b)
 *        - For odd indices: sum += 4 * f(a + i*h)
 *        - For even indices: sum += 2 * f(a + i*h)
 *        - result = (h / 3) * sum
 * 7. Display the result
 * 8. Stop
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
	return sqrt(1 + x * x * x);
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n;
	double a = 0, b = M_PI / 2, h, sum, result;

	printf("Integral: sqrt(1 + x^3) from 0 to pi/2\n");
	printf("Enter number of sub-intervals (even): ");
	scanf("%d", &n);

	h = (b - a) / n;
	sum = f(a) + f(b);

	for (int i = 1; i < n; i++) {
		if (i % 2 == 1)
			sum += 4 * f(a + i * h);
		else
			sum += 2 * f(a + i * h);
	}

	result = (h / 3) * sum;

	printf("Result: %.6lf\n", result);

	return 0;
}
