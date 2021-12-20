#include <stdio.h>

int main(){

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    for (int i=0; i<=number; i++){

        if (i%i==0){
            printf("\nPrime Number: %d",i);
        }
    }
}