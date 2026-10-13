#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mark;
    int maxMark;
    float percentage;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    printf("Enter the maximum mark: ");
    scanf("%d", &maxMark);

    percentage = (float)mark / maxMark * 100;

    printf("Your percentage is %.2f%%\n", percentage);

    return 0;
}