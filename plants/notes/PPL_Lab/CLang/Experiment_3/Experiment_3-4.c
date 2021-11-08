#include <stdio.h>

int main(){

    int days;

    printf("Enter number of days : ");
    scanf("%d", &days);

    printf("Calender format : %d year - %d month - %d days", (days/365), (days/30)%12, (days%30));

    return 0;
}