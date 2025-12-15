/*
 * Algorithm (high level):
 * 1. Start
 * 2. Prompt user for a sentence
 * 3. Read the sentence (including spaces)
 * 4. For each character:
 *        - If it is lowercase (ASCII 97-122), convert to uppercase by subtracting 32
 *        - Otherwise, keep as is
 * 5. Display the converted sentence
 * 6. Stop
 */

#include <stdio.h>

int main() {
	printf("Compiled on %s at %s\n", __DATE__, __TIME__);

	char text[256];

	printf("Enter a sentence: ");
	fgets(text, sizeof(text), stdin);

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] - 32; // ASCII shift to uppercase
		}
	}

	printf("Uppercase: %s", text);

	return 0;
}
