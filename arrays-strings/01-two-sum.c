#include <stdio.h>

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int i, j;

    /* Test Case 1
       Input: nums = {2,7,11,15}, target = 9
       Expected Output: Indices: 0, 1
    */

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Test Case 1 - Indices: %d, %d\n", i, j);
            }
        }
    }

    /* Test Case 2
       Input: nums = {3,2,4}, target = 6
       Expected Output: Indices: 1, 2
    */

    {
        int nums2[] = {3, 2, 4};
        int target2 = 6;

        for (i = 0; i < 3; i++)
        {
            for (j = i + 1; j < 3; j++)
            {
                if (nums2[i] + nums2[j] == target2)
                {
                    printf("Test Case 2 - Indices: %d, %d\n", i, j);
                }
            }
        }
    }

    return 0;
}