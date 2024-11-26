#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[20], size, i, j, min_index, temp;

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

    // Selection sort algorithm
    for (i = 0; i < size - 1; i++)
    {
        // Assume the current index is the minimum
        min_index = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < size; j++)
        {
            // If a smaller element is found, update min_index
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        if (min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
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