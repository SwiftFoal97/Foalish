/* Selection Constructs
* if example
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const int LIMIT = 5;

    int myNumber;
    scanf("%d", &myNumber);

    if (myNumber > LIMIT)
    {
        printf("bigger than five\n");
        printf("I need another line\n");
        printf("just to make a point\n");
    }
    else
    {
        if (myNumber < 0)
        {
            printf("Subzero\n");
        }
        else
        {
            printf("not bigger than five\n");
        }
    }

    exit(0);
}