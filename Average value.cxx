#include <stdio.h>
int main() {
    float num1, num2, average;
    printf("Enter first decimal number: ");
    scanf("%f", &num1);
    printf("Enter second decimal number: ");
    scanf("%f", &num2);
    average = (num1 + num2) / 2.0;
    printf("The average value is: %f\n", average);
    return 0;
}
