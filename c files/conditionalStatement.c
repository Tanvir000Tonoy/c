// conditional statement (যুক্তিক আদেশ ) is like a block of code that will run if a particular condition is true
// there are different types of conditional statements in c
// if .. else
// switch
#include <stdio.h>
void switchStatement(int a)
{
    int z = (a % 2);
    switch (z)
    {
    case 0:
        printf("\ninputed number is even\n");
        break;

    default:
        printf("\ninputed number is not even\n");
        break;
    }
}

int main()
{
    int x, y;
    x = 11;
    y = 11;
    if (x < y) // if true
    {
        printf("%d is less then %d", x, y);
    }
    else // if false :0
    {
        printf("%d is not less then %d", x, y);
    }
    switchStatement(x);
    getchar();
}
