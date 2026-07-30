#include <stdio.h>

int main() {
    int n, row, col;

    printf("Enter N: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (row == 1 || row == n || col == 1 || col == n) {
                printf("* "); // Asterisk + 1 space
            } else {
                printf("  "); // 2 spaces (matches the width above)
            }
        }
        printf("\n");
    }

    return 0;
}
