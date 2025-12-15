/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for marks in 4 papers
 * 3. Read marks for each paper
 * 4. Calculate total and percentage
 * 5. Determine grade based on percentage:
 *        - >= 90: A+
 *        - >= 80: A
 *        - >= 70: B+
 *        - >= 60: B
 *        - >= 50: C
 *        - < 50: NG
 * 6. Display total, percentage, and grade
 * 7. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	float marks[4], total = 0, percentage;
	char grade[5];

	printf("Enter marks in 4 papers:\n");
	for (int i = 0; i < 4; i++) {
		printf("Paper %d: ", i + 1);
		scanf("%f", &marks[i]);
		total += marks[i];
	}

	percentage = (total / 400) * 100;

	if (percentage >= 90)
		sprintf(grade, "A+");
	else if (percentage >= 80)
		sprintf(grade, "A");
	else if (percentage >= 70)
		sprintf(grade, "B+");
	else if (percentage >= 60)
		sprintf(grade, "B");
	else if (percentage >= 50)
		sprintf(grade, "C");
	else
		sprintf(grade, "NG");
	printf("\nTotal Marks: %.2f/400\n", total);
	printf("Percentage: %.2f%%\n", percentage);
	printf("Grade: %s\n", grade);

	return 0;
}
