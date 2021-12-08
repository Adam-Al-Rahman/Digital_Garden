#include <stdio.h>

int main(){
    int number;
    printf(" -----------------\n");
    printf("| Enter the number: ");
    scanf("%d", &number);
    printf(" -----------------\n");

    if (number%2==0){

        printf("| Enter number [%d]: Even |\n", number);
        printf(" -----------------\n");
    }
    else{

        printf("| Enter number [%d]: odd |\n", number);
        printf(" -----------------\n");
    }
    return 0;
}