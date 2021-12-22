#include <stdio.h>

int main(){

    int number_1;
    int number_2;
    int number_3;

    printf("Enter the number: ");
    scanf("%d %d %d", &number_1, &number_2, &number_3);

    if (number_1>number_2 && number_1>number_3){
        printf("The biggest number between %d, %d, %d: %d",number_1,number_2,number_3, number_1);
    }
    else if(number_2>number_1 && number_2>number_3){
        printf("The biggest number between %d, %d, %d: %d",number_1,number_2,number_3, number_2);
    }
    else if(number_3>number_1 && number_3>number_1){
        printf("The biggest number between %d, %d, %d: %d",number_1,number_2,number_3, number_3);
    }

}