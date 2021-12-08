/**
 * @file Experiment_4_2-1.c
 * @author Atiq Urrehman (https://atiq-ur-rehaman.netlify.app/)
 * @brief AIM: Find the roots of a quadratic equation.
 * @version 0.1
 * @date 2021-12-05
 *
 * @copyright Copyright (©) 2021
 *
 */


#include <stdio.h>
#include <regex.h>

int main(){

    regex_t regular_expression;

    char quadratic_equation[14];

    printf("Enter the quadratic equation: ");
    scanf("%c", quadratic_equation);

    int x_sqr_coff;
    int x_coff;
    int constant;

    x_sqr_coff = regcomp(&regular_expression, "/da-zA-Z",0);
    x_coff = regcomp(&regular_expression, "/da-zA-Z",0);
    constant = regcomp(&regular_expression, "/da-zA-Z",0);
    return 0;
}

