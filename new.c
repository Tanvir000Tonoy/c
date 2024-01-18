#include <stdio.h>
#include <string.h>

int main()
{
    char names[10][100];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter student name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character if present
    }

    printf("Names entered: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]); // Corrected the format specifier to %s
    }

    return 0;
}
