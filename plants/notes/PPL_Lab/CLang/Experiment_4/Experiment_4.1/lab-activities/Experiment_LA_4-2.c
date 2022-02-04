#include <stdio.h>


int main(){

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year%4==0){

        if (year%100==0){

            if (year%400==0){
                printf("Year %d is Leap year.", year);
            }
            else{
                printf("Year %d is not a Leap year.", year);
            }
        }
        else{
            printf("Year %d is Leap year.", year);
        }

    }
    else{
        printf("Entered number is not the `Leap Year`");
    }
}