/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define structure for Product
 * 3. Prompt for number of initial records
 * 4. Read and write records to file
 * 5. Close file
 * 6. Prompt for number of additional records
 * 7. Open file in append mode
 * 8. Read and append records to file
 * 9. Close file
 * 10. Stop
 */

#include <stdio.h>

struct Product {
	char name[50];
	int code;
	int quantity;
	float price;
};

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n;
	struct Product p;
	FILE *fp;

	printf("Enter number of initial records: ");
	scanf("%d", &n);

	fp = fopen("products.dat", "wb");

	for (int i = 0; i < n; i++) {
		printf("\nProduct %d:\n", i + 1);
		printf("Name: ");
		scanf(" %[^\n]", p.name);
		printf("Code: ");
		scanf("%d", &p.code);
		printf("Quantity: ");
		scanf("%d", &p.quantity);
		printf("Price: ");
		scanf("%f", &p.price);
		fwrite(&p, sizeof(struct Product), 1, fp);
	}

	fclose(fp);
	printf("\n%d records written to products.dat\n", n);

	printf("\nEnter number of records to append: ");
	scanf("%d", &n);

	fp = fopen("products.dat", "ab");

	for (int i = 0; i < n; i++) {
		printf("\nProduct %d:\n", i + 1);
		printf("Name: ");
		scanf(" %[^\n]", p.name);
		printf("Code: ");
		scanf("%d", &p.code);
		printf("Quantity: ");
		scanf("%d", &p.quantity);
		printf("Price: ");
		scanf("%f", &p.price);
		fwrite(&p, sizeof(struct Product), 1, fp);
	}

	fclose(fp);
	printf("\n%d records appended to products.dat\n", n);

	return 0;
}
