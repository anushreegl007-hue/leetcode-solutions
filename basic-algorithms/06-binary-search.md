# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Binary Search is used to find a target element in a sorted array. I used two variables, `low` and `high`, to represent the search range. I calculated the middle element and compared it with the target. If the middle element was smaller, I searched the right half. If it was larger, I searched the left half.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The array must be sorted for Binary Search to work correctly. The search range is repeatedly divided into two halves.

### Status

Pending on LeetCode.
