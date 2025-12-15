/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define augmented matrix for the system of equations
 * 3. Apply forward elimination to convert to upper triangular matrix
 * 4. Apply back substitution to find solutions
 * 5. Display x, y, z values
 * 6. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	double a[3][4] = {
		{3, 1, -2, 0},
		{2, 4, -5, 24},
		{1, -2, 3, -11}
	};
	double x[3];

	printf("System of equations:\n");
	printf("3x + y - 2z = 0\n");
	printf("2x + 4y - 5z = 24\n");
	printf("x - 2y + 3z = -11\n\n");

	// Forward elimination
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			double ratio = a[j][i] / a[i][i];
			for (int k = 0; k < 4; k++) {
				a[j][k] -= ratio * a[i][k];
			}
		}
	}

	// Back substitution
	x[2] = a[2][3] / a[2][2];
	x[1] = (a[1][3] - a[1][2] * x[2]) / a[1][1];
	x[0] = (a[0][3] - a[0][1] * x[1] - a[0][2] * x[2]) / a[0][0];

	printf("Solution:\n");
	printf("x = %.6lf\n", x[0]);
	printf("y = %.6lf\n", x[1]);
	printf("z = %.6lf\n", x[2]);

	return 0;
}
