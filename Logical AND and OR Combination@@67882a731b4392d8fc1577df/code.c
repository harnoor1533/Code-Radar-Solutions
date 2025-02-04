#include <stdio.h>



int main() {
    int nun1,num2;
    scanf("%d %d",&nun1,&num2);
    if(num1>0 && num2<0)||(num1==0 && num2==0){
        printf("True");
    }else{
        printf("False");
    }

    return 0;
}