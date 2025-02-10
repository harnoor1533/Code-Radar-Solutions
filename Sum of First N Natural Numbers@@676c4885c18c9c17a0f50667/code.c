#include <stdio.h>


int main() {
    int n;
    int sum;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    printf(sum);


    return 0;
}