#include <stdio.h>

void manipulateArray(int arr[], int size, int constant)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += constant; // Add a constant value to each element
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size, constant;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a constant value to add to each element: ");
    scanf("%d", &constant);

    printf("Original array: ");
    printArray(arr, size);

    manipulateArray(arr, size, constant);

    printf("Modified array after adding %d to each element: ", constant);
    printArray(arr, size);

    return 0;
}
