#include <stdio.h>

int main()
{
    int number_1;
    int number_2;
    int number_3;

    printf("Enter values of a and b : ");
    scanf("%d %d", &number_1, &number_2);

    number_3 = number_1;
    number_1 = number_2;
    number_2 = number_3;

    printf("The swapped values of a is %d and b is %d : ", number_1, number_2);

    return 0;
}