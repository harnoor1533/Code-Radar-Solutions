#include <stdio.h>


int main() {
    int num1,num2;
    char op;
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op){
        case'+':
        printf("%d + %d=%d\n",num1,num2,num1+num2);
    }
    return 0;
}