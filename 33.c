/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define system of equations
 * 3. Initialize x, y, z with 0
 * 4. Set error tolerance and max iterations
 * 5. Iteratively update using Gauss-Seidel:
 *        - x = (-y + 2z) / 3
 *        - y = (24 - 2x + 5z) / 4
 *        - z = (-11 - x + 2y) / 3
 * 6. Check convergence until error < tolerance
 * 7. Display x, y, z values
 * 8. Stop
 */

#include <stdio.h>
#include <math.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	double x = 0, y = 0, z = 0;
	double x_new, y_new, z_new;
	double tolerance = 1e-6;
	int max_iter = 1000, iter = 0;
	double error;

	printf("System of equations:\n");
	printf("3x + y - 2z = 0\n");
	printf("2x + 4y - 5z = 24\n");
	printf("x - 2y + 3z = -11\n\n");

	while (iter < max_iter) {
		x_new = (-y + 2 * z) / 3.0;
		y_new = (24 - 2 * x_new + 5 * z) / 4.0;
		z_new = (-11 - x_new + 2 * y_new) / 3.0;

		error = fabs(x_new - x) + fabs(y_new - y) + fabs(z_new - z);

		x = x_new;
		y = y_new;
		z = z_new;

		iter++;

		if (error < tolerance)
			break;
	}

	printf("Solution after %d iterations:\n", iter);
	printf("x = %.6lf\n", x);
	printf("y = %.6lf\n", y);
	printf("z = %.6lf\n", z);

	return 0;
}
