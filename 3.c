/*
 * Algorithm (high level):
 * 1. Start
 * 2. Display a menu with options:
 *    a) Convert Celsius to Fahrenheit
 *    b) Convert Fahrenheit to Celsius
 *    c) Exit
 * 3. Read the user's choice
 * 4. If choice is 'a':
 *      - Prompt user for temperature in Celsius
 *      - Read value C
 *      - Compute F = (C * 9/5) + 32
 *      - Display F
 *    Else if choice is 'b':
 *      - Prompt user for temperature in Fahrenheit
 *      - Read value F
 *      - Compute C = (F - 32) * 5/9
 *      - Display C
 *    Else if choice is 'c':
 *      - Exit program
 *    Else:
 *      - Show invalid choice message
 * 6. Stop
 */

#include <stdio.h>

int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	int choice;
	double c, f;

	    printf("\nTemperature Converter\n");
		printf("1. Celsius to Fahrenheit\n");
		printf("2. Fahrenheit to Celsius\n");
		printf("3. Exit\n");
		printf("Enter your choice (1-3): ");

		scanf("%d", &choice);

		switch (choice) {
			case 1:
				printf("Enter temperature in Celsius: ");
				scanf("%lf", &c);
				f = (c * 9.0 / 5.0) + 32.0;
				printf("%.2f C = %.2f F\n", c, f);
				break;
			case 2:
				printf("Enter temperature in Fahrenheit: ");
				scanf("%lf", &f);
				c = (f - 32.0) * 5.0 / 9.0;
				printf("%.2f F = %.2f C\n", f, c);
				break;
			case 3:
				printf("Exiting...\n");
				return 0;
			default:
				printf("Invalid choice. Please select 1, 2 or 3.\n");
		}
	return 0;
}
