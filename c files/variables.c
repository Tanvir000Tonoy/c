// how to declare a variable ?
// type name = value
//=> type means data type , name means variable name , and value means the value assign for the variable;

#include <stdio.h>
int main()
{
    int x = 10;
    float y = 10.1234;
    double z = 10.118737097;
    printf("%d, %f, %lf", x, y, z);
    // for decimal we can use %.(how many digit) we want to see after the decimal point
    printf("\n");
    // like this
    printf("%d , %.10f,%.30lf", x, y, z);
}
