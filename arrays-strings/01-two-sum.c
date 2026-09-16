#include <stdio.h>

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: %d, %d\n", i, j);
            }
        }
    }

    return 0;
}
