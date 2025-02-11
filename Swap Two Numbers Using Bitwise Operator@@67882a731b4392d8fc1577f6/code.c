#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d",a,b);
    return 0;
}