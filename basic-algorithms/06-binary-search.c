#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int size = 5;
    int target = 7;
    int low = 0, high = size - 1;
    int mid;
    int found = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Element found at index: %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}
