/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for matrix dimensions (rows, cols)
 * 3. Read rows and cols
 * 4. Read elements of matrix A
 * 5. Compute transpose T where T[j][i] = A[i][j]
 * 6. Display transpose matrix T
 * 7. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int rows, cols;
	int A[10][10], T[10][10];

	printf("Enter rows and columns: ");
	scanf("%d %d", &rows, &cols);

	printf("Enter elements of Matrix A:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			T[j][i] = A[i][j];
		}
	}

	printf("Transpose of the matrix:\n");
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d ", T[i][j]);
		}
		printf("\n");
	}

	return 0;
}
