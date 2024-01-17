// finding fibonacci numbers
// 0,1,1,2,3,5,8,13...
#include <stdio.h>
int fibonacci(int x)
{
    return x + fibonacci(x - 1);
}
int main()
{
    int y = fibonacci(12);
    printf("%d", y);
}