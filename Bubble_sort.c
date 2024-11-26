#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[20], size, i, j, temp;

    // Input the size of the array
    printf("Enter the size of the list (max 20): ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d integer values: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\nOriginal array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nSorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
}