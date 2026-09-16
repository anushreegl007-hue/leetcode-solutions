#include <stdio.h>

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = 6;
    int i;
    int minPrice = prices[0];
    int maxProfit = 0;
    int profit;

    /* Test Case 1
       Input: {7, 1, 5, 3, 6, 4}
       Expected Output: 5
    */

    for (i = 1; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }

        profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }

    printf("Test Case 1 - Maximum Profit: %d\n", maxProfit);

    /* Test Case 2
       Input: {7, 6, 4, 3, 1}
       Expected Output: 0
    */

    {
        int prices2[] = {7, 6, 4, 3, 1};
        int size2 = 5;
        int minPrice2 = prices2[0];
        int maxProfit2 = 0;

        for (i = 1; i < size2; i++)
        {
            if (prices2[i] < minPrice2)
            {
                minPrice2 = prices2[i];
            }

            profit = prices2[i] - minPrice2;

            if (profit > maxProfit2)
            {
                maxProfit2 = profit;
            }
        }

        printf("Test Case 2 - Maximum Profit: %d\n", maxProfit2);
    }

    return 0;
}