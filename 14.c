/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a hexadecimal number (as a string)
 * 3. Read the hex string
 * 4. Convert to decimal by processing each digit:
 *        - Map the hex digit to its value (0-15)
 *        - Accumulate: decimal = decimal * 16 + value
 * 5. Display the decimal (denary) value
 * 6. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	char hex[256];
	unsigned long long decimal = 0;

	printf("Enter a hexadecimal number: ");
	fgets(hex, sizeof(hex), stdin);

	for (int i = 0; hex[i] != '\0' && hex[i] != '\n'; i++) {
		char c = hex[i];
		int value;

		if (c >= '0' && c <= '9')
			value = c - '0';
		else if (c >= 'A' && c <= 'F')
			value = 10 + (c - 'A');
		else if (c >= 'a' && c <= 'f')
			value = 10 + (c - 'a');
		else
			continue; // ignore invalid characters

		decimal = decimal * 16 + value;
	}

	printf("Decimal: %llu\n", decimal);

	return 0;
}
