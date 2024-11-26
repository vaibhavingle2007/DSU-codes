#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[20], size, i, key, found = 0;

    // Input the size of the array
    printf("Enter the size of the list (max 20): ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d integer values: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            printf("Element is found at index %d", i);
            found = 1;
            break;
        }
    }

    // Check if element was not found
    if (!found)
    {
        printf("Given element is not found in the list!!");
    }

    getch();
}
