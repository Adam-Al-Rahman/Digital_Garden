#include <stdio.h>

int main()
{

    // parallelogram
    float parallelogram_area;
    float parallelogram_base;
    float parallelogram_height;

    printf("Enter parallelogram base and height : ");
    scanf("%f %f", &parallelogram_base, &parallelogram_height);

    parallelogram_area = parallelogram_base * parallelogram_height;

    // trapezoid
    float trapezoid_area;
    float trapezoid_height;
    float trapezoid_sbase;
    float trapezoid_lbase;

    printf("Enter trapezoid height, short base and long base : ");
    scanf("%f %f %f", &trapezoid_height, &trapezoid_sbase, &trapezoid_lbase);

    trapezoid_area = ((trapezoid_sbase + trapezoid_lbase) / 2) * (trapezoid_height);

    // Rhombus
    float rhombus_area;
    float rhombus_diag_1st;
    float rhombus_diag_2nd;

    printf("Enter rhombus 1st diagonal and 2nd diagonal values : ");
    scanf("%f %f", &rhombus_diag_1st, &rhombus_diag_2nd);

    rhombus_area = (rhombus_diag_1st * rhombus_diag_2nd) / 2;

    // Sphere
    float sphere_area;
    float sphere_radius;

    printf("Enter sphere radius : ");
    scanf("%f", &sphere_radius);

    sphere_area = sphere_radius * sphere_radius * 4 * 3.14; // approx pi value been considered.

    // Ellipse
    float ellipse_area;
    float ellipse_min_radius;
    float ellipse_major_radius;

    printf("Enter Ellipse minor and major size of radius : ");
    scanf("%f %f", &ellipse_min_radius, &ellipse_major_radius);

    ellipse_area = 3.14 * ellipse_min_radius * ellipse_major_radius;

    printf(
        "\nArea of Parallelogram : %f \nArea of Trapezoid : %f \nArea of Rhombus : %f \nArea of Sphere : %f \nArea of Ellipse : %f",
        parallelogram_area, trapezoid_area, rhombus_area, sphere_area, ellipse_area);

    return 0;
}