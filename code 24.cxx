#include <stdio.h>
int main() {
    float meters, centimeters;
    printf("Enter height in meters (e.g., 1.75): ");
    scanf("%f", &meters);
    centimeters = meters * 100.0;
    printf("%f meters is exactly %f centimeters.\n", meters, centimeters);
    return 0;
}
