/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for dimensions of matrix A (rows1, cols1)
 * 3. Prompt user for dimensions of matrix B (rows2, cols2)
 * 5. Read elements of matrix A
 * 6. Read elements of matrix B
 * 7. Compute product matrix C where C[i][j] = sum of A[i][k] * B[k][j] for all k
 * 8. Display matrix C
 * 9. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int rows1, cols1, rows2, cols2;
	int A[10][10], B[10][10], C[10][10];

	printf("Enter rows and columns of Matrix A: ");
	scanf("%d %d", &rows1, &cols1);

	printf("Enter rows and columns of Matrix B: ");
	scanf("%d %d", &rows2, &cols2);


	printf("Enter elements of Matrix A:\n");
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	printf("Enter elements of Matrix B:\n");
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			C[i][j] = 0;
			for (int k = 0; k < cols1; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	printf("Product of matrices:\n");
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols2; j++) {
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
