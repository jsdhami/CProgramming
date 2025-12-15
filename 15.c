/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for matrix dimensions (rows, cols)
 * 3. Read rows and cols
 * 4. Read elements of matrix A
 * 5. Read elements of matrix B
 * 6. Compute sum matrix C where C[i][j] = A[i][j] + B[i][j]
 * 7. Display matrix C
 * 8. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int rows, cols;
	int A[10][10], B[10][10], C[10][10];

	printf("Enter rows and columns: ");
	scanf("%d %d", &rows, &cols);

	printf("Enter elements of Matrix A:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter elements of Matrix B:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("Sum of matrices:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
