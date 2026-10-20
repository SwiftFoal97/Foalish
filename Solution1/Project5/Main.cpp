/* Functions - passing by value */

#include <stdio.h>
#include <stdlib.h>

/* Prototypes (Decelerations) */

/* No params and void return */
void printLine();

/* Three params and a return */
int addForth (int, int, int, int);

int main(int argc, char** argv)
{
    int w = 5;
    int x = 10;
    int y = 20;
    int z = 30;

    /* Calling addForth */
    int sum = addForth(w, x, y, z);

    /* Calling printLine */
    printLine();

    printf("Answer: %d\n", sum);

    printLine();
}
/* Function Bodies (Definitions) */
void printLine()
{
    printf("*********************************");
    /* void function has no return */
}

int addForth(int a, int b, int c, int d)
{
    /* local variable */
    int total = a + b + c + d;

    /*  must return an int */
    return total;
   
}