#include <stdio.h>

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;
    int i, j = 0;
    int temp;

    /* Test Case 1
       Input: {0, 1, 0, 3, 12}
       Expected Output: {1, 3, 12, 0, 0}
    */

    for (i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    printf("Test Case 1: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    /* Test Case 2
       Input: {0, 0, 1}
       Expected Output: {1, 0, 0}
    */

    {
        int nums2[] = {0, 0, 1};
        int size2 = 3;
        j = 0;

        for (i = 0; i < size2; i++)
        {
            if (nums2[i] != 0)
            {
                temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
                j++;
            }
        }

        printf("\nTest Case 2: ");
        for (i = 0; i < size2; i++)
        {
            printf("%d ", nums2[i]);
        }
    }

    return 0;
}