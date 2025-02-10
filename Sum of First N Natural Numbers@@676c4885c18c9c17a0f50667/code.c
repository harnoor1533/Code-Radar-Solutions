#include <stdio.h>

int main() {
    int n, sum = 0;  // Corrected the declaration of sum
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum);  // Added format specifier %d and a newline character

    return 0;
}
