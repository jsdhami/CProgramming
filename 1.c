#include <stdio.h>
/*
Algorithm to determine if a year is a leap year (AD):
1. Read an integer year y from the user.
2. If y is divisible by 400, it is a leap year.
3. Else if y is divisible by 100, it is NOT a leap year.
4. Else if y is divisible by 4, it is a leap year.
5. Otherwise, it is NOT a leap year.
*/
int main() {
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    int y;
    printf("Enter a year in AD:");
    scanf("%d", &y);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("\n %d is a leap year", y);
    else
        printf("%d is not a leap year", y);

    return 0;
}