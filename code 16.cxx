#include <stdio.h>
int main() {
    int years, days;
    printf("Enter your age in years: ");
    scanf("%d", &years);
    days = years * 365; // Simple conversion ignoring leap years
    printf("You have lived for roughly %d days.\n", days);
    return 0;
}
