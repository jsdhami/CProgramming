/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define f(x) = sqrt(sin(x))
 * 3. Set limits: a = 0, b = pi/2
 * 4. Prompt user for number of sub-intervals n
 * 5. Calculate step size h = (b - a) / n
 * 6. Apply trapezoidal rule:
 *        - sum = f(a) + f(b)
 *        - For i = 1 to n-1: sum += 2 * f(a + i*h)
 *        - result = (h / 2) * sum
 * 7. Display the result
 * 8. Stop
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
	return sqrt(sin(x));
}

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n;
	double a = 0, b = M_PI / 2, h, sum, result;

	printf("Integral: sqrt(sin(x)) from 0 to pi/2\n");
	printf("Enter number of sub-intervals: ");
	scanf("%d", &n);

	h = (b - a) / n;
	sum = f(a) + f(b);

	for (int i = 1; i < n; i++) {
		sum += 2 * f(a + i * h);
	}

	result = (h / 2) * sum;

	printf("Result: %.6lf\n", result);

	return 0;
}
