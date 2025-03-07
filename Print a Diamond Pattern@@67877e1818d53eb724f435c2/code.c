#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);
    space = n - 1;
    // Print the upper part of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        space--;
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    space = 1;

}

    // Print the lower part of the diamond