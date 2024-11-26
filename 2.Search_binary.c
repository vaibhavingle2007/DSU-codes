#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[20], size, i, key, low, high, mid, found = 0;

    // Input the size of the array
    printf("Enter the size of the list (max 20): ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d integer values (in sorted order): ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    // Binary search
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element is found at index %d", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Check if element was not found
    if (!found)
    {
        printf("Given element is not found in the list!!");
    }

    getch();
}
