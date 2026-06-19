#include <stdio.h>
int main() {
    int currentYear, nextYear;
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    nextYear = currentYear + 1;
    printf("Next year will be %d.\n", nextYear);
    return 0;
}