#include <stdio.h>

int getNthBit(int num, int n) {
return (num >> n) & 1;
}

int main() {
    int number, n;

    scanf("%d", &number);
    scanf("%d", &n);
    
    printf("The %dth bit of %d is %d\n", n, number, getNthBit(number, n));
    
    return 0;
}

