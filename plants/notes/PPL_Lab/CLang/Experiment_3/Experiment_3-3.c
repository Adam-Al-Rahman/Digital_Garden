#include <stdio.h>

int main(){

    float celsius;

    printf("Enter Celsius Value : ");
    scanf("%f", &celsius);

    printf(
        "\nKelvin : %.3fK \nFahrenheit : %.3f\u00B0F",
        (celsius + 273.15),
        (celsius * (9/5)) + 32
    );

    return 0;

}