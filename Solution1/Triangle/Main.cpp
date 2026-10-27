#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    float height;
    float base;
    float area;

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("Enter the base width of the triangle: ");
    scanf("%f", &base);

    area = (base * height) / 2;

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
