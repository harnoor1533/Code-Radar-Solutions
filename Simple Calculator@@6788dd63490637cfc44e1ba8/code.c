#include <stdio.h>


int main() {
    int num1,num2;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op){
        case'+':
        printf("%d\n",num1+num2);
        break;
        case'-':
        printf("%d\n",num1-num2);
        break;
        case'*':
        printf("%d\n",num1*num2);
        break;
        case'/':
        printf("%d",num1/num2);
        break;

        default:
        printf("Invalid");
    }
    return 0;
}