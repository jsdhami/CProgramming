/*
 * Program to compute surface area and volume of:
 *  - Right circular cone (total surface area and volume)
 *  - Right circular cylinder (total surface area and volume)
 *  - Sphere (surface area and volume)
 *
 * Author: Generated
 *
 * Algorithm (short):
 * 1. Display menu and read user choice.
 * 2. For each shape, prompt for required dimensions (radius, height).
 * 3. Validate input (must be positive numbers).
 * 4. Compute surface area and volume using geometric formulas:
 *    - Cone: slant_length = sqrt(r^2 + h^2); surface = PI*r*(r+slant_length); volume = (PI*r^2*h)/3
 *    - Cylinder: surface = 2*PI*r*(r+h); volume = PI*r^2*h
 *    - Sphere: surface = 4*PI*r^2; volume = (4/3)*PI*r^3
 * 5. Print results and return to menu until user exits.
 */

#include <stdio.h>
#include <math.h>
/* use a const variable for PI instead of a macro */
const double PI = 3.14159265358979323846;

int cone()
{
    double r, h, l, surface, volume;
    printf("Enter the radius (r)? ");
    if (scanf("%lf", &r) != 1 || r <= 0) { printf("Invalid\n"); return 0; }
    printf("Enter the height (h)? ");
    if (scanf("%lf", &h) != 1 || h <= 0) { printf("Invalid\n"); return 0; }
    l = sqrt(r*r + h*h);
    surface = PI * r * (r + l);
    volume = (PI * r * r * h) / 3.0;
    printf("Cone: length=%.4f Surface Area=%.4f Volume=%.4f\n", l, surface, volume);
    return 0;
}

int cylinder(){
    double r, h, surface, volume;
    printf("Enter the radius (r)? ");
    if (scanf("%lf", &r) != 1 || r <= 0) { printf("Invalid\n"); return 0; }
    printf("Enter the height (h)? ");
    if (scanf("%lf", &h) != 1 || h <= 0) { printf("Invalid\n"); return 0; }
    surface = 2.0 * PI * r * (r + h);
    volume = PI * r * r * h;
    printf("Cylinder: Surface Area=%.4f Volume=%.4f\n", surface, volume);
    return 0;
}

int sphere(){
    double r, surface, volume;
    printf("Enter the radius (r)?");
    if (scanf("%lf", &r) != 1 || r <= 0) { printf("Invalid\n"); return 0; }
    surface = 4.0 * PI * r * r;
    volume = (4.0/3.0) * PI * r * r * r;
    printf("Sphere: Surface Area=%.4f Volume=%.4f\n", surface, volume);
    return 0;
}

int main(){
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    int choice;
    while (1) {
        printf("\nChoose (1)Cone (2)Cylinder (3)Sphere (4)Exit: ");
        if (scanf("%d", &choice) != 1) { int c; while ((c = getchar()) != '\n' && c != EOF); printf("Invalid\n"); continue; }
        switch (choice) {
            case 1: cone(); break;
            case 2: cylinder(); break;
            case 3: sphere(); break;
            case 4: return 0;
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
