#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[20], size, i, j, key;

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

    // Insertion sort algorithm
    for (i = 1; i < size; i++)
    {
        // Store the current element as key
        key = arr[i];
        
        // Initialize j as the element before key
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key 
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Place the key in its correct position
        arr[j + 1] = key;
    }

    // Display sorted array
    printf("\nSorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
}