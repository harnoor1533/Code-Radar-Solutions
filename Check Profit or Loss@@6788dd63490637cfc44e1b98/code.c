#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("loss");
    }else if(x<y){
        printf("profit");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}