/*
 * Algorithm (high level):
 * 1. Start
 * 2. Define structure for record (e.g., Student)
 * 3. Prompt user for number of records
 * 4. Read n
 * 5. For each record:
 *        - Read data fields
 * 6. Open file in write mode
 * 7. Write all records to file
 * 8. Close file
 * 9. Display confirmation
 * 10. Stop
 */

#include <stdio.h>
#include <stdlib.h>

struct Student {
	int id;
	char name[50];
	float marks;
};

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int n;
	struct Student *students;

	printf("Enter number of records: ");
	scanf("%d", &n);

	students = (struct Student *)malloc(n * sizeof(struct Student));

	if (students == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("\nRecord %d:\n", i + 1);
		printf("Enter ID: ");
		scanf("%d", &students[i].id);
		printf("Enter Name: ");
		scanf(" %[^\n]", students[i].name);
		printf("Enter Marks: ");
		scanf("%f", &students[i].marks);
	}

	FILE *fp = fopen("students.dat", "wb");

	if (fp == NULL) {
		printf("File creation failed.\n");
		free(students);
		return 1;
	}

	fwrite(students, sizeof(struct Student), n, fp);
	fclose(fp);

	printf("\n%d records written to students.dat\n", n);

	free(students);

	return 0;
}
