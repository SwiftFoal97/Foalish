#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const float VAT = 20.0f;
    float price;
    float tax;
    float total;

    printf("Enter price in pounds: ");

    if (scanf("%f", &price) != 1)
    {
        printf("Invalid price entered.\n");
        return 1;
    }

    tax = price * VAT / 100.0f;
    total = price + tax;

    printf("VAT amount: %.2f pounds\n", tax);
    printf("Price including VAT: %.2f pounds\n", total);

    return 0;
}

