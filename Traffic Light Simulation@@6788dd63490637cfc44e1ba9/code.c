#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'R':
        printf("stop");
        break;
        case 'G':
        printf("Go");
        break;
        case'Y':
        printf("slow Down");
        break;
    }

    return 0;
}