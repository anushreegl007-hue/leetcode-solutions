# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single pass through the array. I keep track of the minimum price seen so far and calculate the profit by selling at the current price.

If the current profit is greater than the maximum profit, I update the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If no profit is possible, the maximum profit is 0.

### Status

Solved on LeetCode.