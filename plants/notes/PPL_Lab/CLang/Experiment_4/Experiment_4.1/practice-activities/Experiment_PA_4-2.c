#include <stdio.h>

int main(){
    signed int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (number>0){
        printf("Number: Positive");
    }
    else if (number<0){
        printf("Number: Negative");
    }
    else{
        printf("Number: Zero");
    }

    return 0;
}