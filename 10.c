/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a decimal number
 * 3. Read the number (integer)
 * 4. Convert to hexadecimal:
 *        - Repeatedly divide by 16
 *        - Keep track of remainders
 *        - Map remainders to hex digits (0-9, A-F)
 * 5. Display the hexadecimal equivalent
 * 6. Stop
 */

#include <stdio.h>
int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	long long num;
	char hex[100];
	int i = 0;

	printf("Enter a decimal number: ");
	scanf("%lld", &num);

	if (num == 0) {
		printf("Hexadecimal: 0\n");
		return 0;
	}

	long long temp = num;
	while (temp > 0) {
		long long remainder = temp % 16;
		if (remainder < 10)
			hex[i++] = remainder + '0';
		else
			hex[i++] = remainder - 10 + 'A';
		temp /= 16;
	}

	hex[i] = '\0';
	for (int j = 0; j < i / 2; j++) {
		char c = hex[j];
		hex[j] = hex[i - 1 - j];
		hex[i - 1 - j] = c;
	}

	printf("Hexadecimal: %s\n", hex);

	return 0;
}
