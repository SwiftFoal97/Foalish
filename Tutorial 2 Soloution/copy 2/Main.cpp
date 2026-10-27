/* Selection Constructs
* if example
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const int LOOP_MAX = 100; /* Best practice for constants */

    int count;
    int loopStop;

    /* Task 1: Count up from 0 to 99 */
    for (int i = 0; i < LOOP_MAX; i++)
    {
        printf("Loop counter: %d\n", i);
    }

    /* Task 2: Count down from 100 to 0 */
    for (int i = LOOP_MAX; i >= 0; i--)
    {
        printf("Countdown: %d\n", i);
    }

    printf("Enter number to stop loop\n");
    scanf("%d", &loopStop);

    count = 0;

    /* Task 4: Stop at loopStop or LOOP_MAX */
    while (count < loopStop && count < LOOP_MAX)
    {
        printf("Loop counter: %d\n", count);
        count++; /* Keep enabled */
    }

    exit(0);
}
