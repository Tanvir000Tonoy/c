// there are different data types in c
// int  `4 bytes`
// float    `4 bytes`
// double   `8 bytes`
// char     `1 byte`

#include <stdio.h>
int main()
{
    int a = 100;    // intiger number
    float b = 100;  // decimal number
    double c = 100; // big sized decimal number
    char d = 't';
    printf("===============================================\n");
    printf("Memory uses of different data types : \n int: %d  bytes\n flaot: %d  bytes\n double : %d  bytes\n char : %d byte\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    printf("===============================================\n");
}