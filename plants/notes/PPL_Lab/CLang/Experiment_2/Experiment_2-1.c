/**
 * @file Experiment_2-1.c
 * @author https://atiq-ur-rehaman.netlify.app/
 * @brief  AIM : Find the sum, difference, multiplication & division of two numbers.
 * @version 0.1
 * @date 2021-11-02
 *
 * @copyright Copyright (c) 2021
 *
 */

// Pre-processor directive
#include <stdio.h>

int main(){

    // Declaring two int variable
    int number_1;
    int number_2;

    // Declaring the Sum, Difference, Multiplication & Division variable
    int Sum;
    int Difference;
    int Multiplication;
    int Division;


    // Displaying and taking input
    printf("Enter any two interger : ");
    scanf("%d %d", &number_1, &number_2);

    // Defining variable Sum;
    Sum = number_1 + number_2;

    // Defining variable Difference;
    Difference =  number_1 - number_2;

    // Defining variable Multiplication;
    Multiplication = number_1 * number_2;

    // Defining variable Division;
    Division = number_1 / number_2;

    printf(
        "\nSum of two interger : %d \nDifference of two interger : %d \nMultiplication of two interger : %d \nDivision of two interger : %d",
        Sum, Difference, Multiplication, Division
    );
    return 0;

}

