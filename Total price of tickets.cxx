#include <stdio.h>
int main() {
    int tickets, totalCost;
    printf("How many tickets do you want to buy? ");
    scanf("%d", &tickets);
    totalCost = tickets * 12; // Each ticket costs $12
    printf("Total price for %d tickets is $%d.\n", tickets, totalCost);
    return 0;
}
