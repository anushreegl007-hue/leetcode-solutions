#include <stdio.h>
#include <string.h>

int main()
{
    char *strs[] = {"flower", "flow", "flight"};
    int size = 3;
    int i, j;
    int length;
    char prefix[100];

    /* Test Case 1
       Input: {"flower", "flow", "flight"}
       Expected Output: fl
    */

    strcpy(prefix, strs[0]);

    length = strlen(prefix);

    for (i = 1; i < size; i++)
    {
        j = 0;

        while (j < length && strs[i][j] == prefix[j])
        {
            j++;
        }

        length = j;
        prefix[length] = '\0';
    }

    printf("Test Case 1 - Longest Common Prefix: %s\n", prefix);

    /* Test Case 2
       Input: {"dog", "racecar", "car"}
       Expected Output: No common prefix
    */

    {
        char *strs2[] = {"dog", "racecar", "car"};
        int size2 = 3;
        char prefix2[100];
        int length2;
        int i2, j2;

        strcpy(prefix2, strs2[0]);
        length2 = strlen(prefix2);

        for (i2 = 1; i2 < size2; i2++)
        {
            j2 = 0;

            while (j2 < length2 && strs2[i2][j2] == prefix2[j2])
            {
                j2++;
            }

            length2 = j2;
            prefix2[length2] = '\0';
        }

        if (length2 == 0)
            printf("Test Case 2 - No common prefix\n");
        else
            printf("Test Case 2 - Longest Common Prefix: %s\n", prefix2);
    }

    return 0;
}