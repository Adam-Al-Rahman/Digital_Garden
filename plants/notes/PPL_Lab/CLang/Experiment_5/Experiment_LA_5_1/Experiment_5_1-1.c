/**
 * @file Experiment_5_1-1.c
 * @author Atiq Urrehaman(https://atiq-ur-rehaman.netlify.app)
 * @version 0.1
 * @date 2021-12-06
 * @aim: Generate all the Armstrong number from 1 to n.
 * @theory:
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

//    char number[10]="";
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    // for (int i = 0; i <= strlen(number); i++){
    //     int number_base;
    //     number_base=(int)strtol(number, (char **)NULL, 10);
    //     int numb;
    //     numb=(int)strtol(number, (char **)NULL, 10)/10;
    //     printf("\n%d %d", number_base, numb);
    // }

    int number_base;
    number_base=number%10;
    printf("Number Base: %d. ", number_base);
    int num[10];
    int num_base[10];
    for (int i=0; i<2; i++){
        int numb;
        number=number/10;
        num[i]=number;
        num_base[i]=num[i]*num[i];
        printf(" %d +",num_base[i]);
    }

}