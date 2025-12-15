/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a hexadecimal number (as a string)
 * 3. Read the hex string
 * 4. For each hex digit:
 *        - Map to its 4-bit binary equivalent
 *        - Append to output
 * 5. Display the binary value (skip leading zeros within each nibble only by construction)
 * 6. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	char hex[256];

	printf("Enter a hexadecimal number: ");
	fgets(hex, sizeof(hex), stdin);

	printf("Binary: ");

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

		// Print 4-bit binary for this hex digit
		for (int bit = 3; bit >= 0; bit--) {
			int mask = 1 << bit;
			putchar((value & mask) ? '1' : '0');
		}
	}

	putchar('\n');

	return 0;
}
