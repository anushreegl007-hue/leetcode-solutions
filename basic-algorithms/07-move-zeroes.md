# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a two-pointer approach. One pointer `i` checks each element, while `j` keeps track of the position where the next non-zero element should be placed.

Whenever a non-zero element is found, I swap it with the element at position `j` and increase `j`. This moves all non-zero elements to the front while keeping all zeroes at the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in-place without using another array. The relative order of the non-zero elements is maintained.

### Status

Pending on LeetCode.