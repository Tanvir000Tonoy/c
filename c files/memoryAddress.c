// every variable is a container of data like they stores the data in binary digits or bits   and for int,float type we have 4 bytes where 1 bytes is = to 8 bits ;for dubles we have 8 bytes and for char type we have 1 byte of memory ... here in memory the size is already defined in bits and we can find a group of memory and call them with a name which is considered as the memory address and its on hexadecimal format like this => 0x2e8392722... (tanvir tonoy :_( english pari na ))
#include <stdio.h>
int main()
{
    int x = 20;
    printf("%p", &x); // 0x16bcbb3fc <= here is the memory address
}