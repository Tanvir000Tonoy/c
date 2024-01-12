// loops in programming languages are similer ... it means doing one task so many time on basis of a particular condition.
// for example we need the table of a number so we can take the help of a loop
// there are many loops in other programming languages but in c we can say two or three types of loop are available here.
// for
// while
// variend of while => do while loop
// lets print the table of 10 with the help of those loops

#include <stdio.h>
int main()
{
    // using while loop;
    printf("while loop\n");

    printf("===========\n");
    int i = 1;
    while (i <= 10)
    {
        printf("10x%d = %d\n", i, (10 * i));
        i++;
    }
    printf("\n");
    printf("\n");
    printf("do  while loop\n");
    printf("===========\n");
    int j = 1;
    do
    {
        printf("10x%d = %d\n", j, (10 * j));
        j++;
    } while (j <= 10);
    printf("\n");
    printf("\n");
    printf("for loop\n");
    printf("===========\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("10x%d = %d\n", i, (10 * i));
    }
}