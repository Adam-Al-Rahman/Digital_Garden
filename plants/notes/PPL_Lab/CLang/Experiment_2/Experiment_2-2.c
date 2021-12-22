#include <stdio.h>

int main(){

    int number;
    printf("Enter the number: ");

    scanf("%d",&number);
    if (number%2 == 0){
        printf("Number %d is Even.",number);
    }
    else if(number%2 == 1){
        printf("Number %d is Odd", number);
    }

}