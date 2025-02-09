#include <stdio.h>

int main() {
    int month;
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("31");
        break;
        case 3:
        printf("31");
        break;
        case 5:
        printf("31");
        break;
        case 7:
        printf("31");
        break;
        case 8:
        printf("31");
        break;
        case 10:
        printf("31");
        break;
        case 12:
        printf("31");
        break;
        case 4:
        printf("30");
        break;
        case 6:
        printf("30");
        break;
        case 9:
        printf("30");
        break;
        case 11:
        printf("30");
        break;
        case 2:
        {
            int year;
            scanf("%d",&year);
            if((year %4==0 && year %100 !=0)||(year %400==0)){
                printf("29");
            }else{
                printf("28");
            }
            break;
        }
        default("Invalid month");


    }
    return 0;
}