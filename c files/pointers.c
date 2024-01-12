// pointers in c is important because we can directly manipulate the value of a particular variable with its memory address and a pointer is nothing but a variable that holds other (particular variables) variables memory address on it ;; its kind of confusing but let me clear first .

#include <stdio.h>
int main()
{
    // our variable
    long int x = 10000221290; // too big for a int type :)
    long int *xyz = &x;       // its the pointer that have the memory address of variable 'x'
    printf("%p <= memory address of 'x'", xyz);
    // we can also find the value of variable 'x' with this pointer
    printf("\n this is the value of 'x' =>%ld", *xyz);
}