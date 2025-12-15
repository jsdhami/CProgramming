/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a binary number (as a string)
 * 3. Read the binary string
 * 4. Convert binary to a decimal value by processing each bit
 * 5. Convert the decimal value to hexadecimal representation
 * 6. Display the hexadecimal value
 * 7. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	char bin[256];
	unsigned long long value = 0;

	printf("Enter a binary number: ");
	fgets(bin, sizeof(bin), stdin);

	// Convert binary string to integer value
	for (int i = 0; bin[i] != '\0' && bin[i] != '\n'; i++) {
		if (bin[i] == '0' || bin[i] == '1') {
			value = (value << 1) + (bin[i] - '0');
		}
	}

	printf("Hexadecimal: %llX\n", value);

	return 0;
}
