// structure is nothing but a group of variables
#include <stdio.h>
struct student
{
    char name[10]; // first name
    int age;       // intiger
    float gpa;     // gross point average
};
int main()
{
    struct student studentOne = {"tanvir", 20, 4.78};
    printf("HI i am %s , I am %d years old and my gpa is : %f", studentOne.name, studentOne.age, studentOne.gpa);
}