/**
 * @file Experiment_2-4.c
 * @author Atiq Urrehaman (https://atiq-ur-rehaman.netlify.app/)
 * @brief AIM : Multiply two numbers without using arithmetic multiplication operator (*)
 * @version 0.1
 * @date 2021-11-15
 *
 * @copyright Copyright (C) 2021
 *
 */

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter two integer a, b : ");
    scanf("%d %d", &a, &b);

    if (a <= b)
    {
        c = b;
        for (int i = 1; i = a; i++)
            b = c + b;

        printf("Multiplication of  `a` and `b` : %d", b);
    }
    else
    {
        c = a;
        for (int i = 1; i = b; i++)
            a = c + a;

        printf("Multiplication of  `a` and `b` : %d", a);
    }

    return 0;
}