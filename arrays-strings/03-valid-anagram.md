# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a character frequency array to count the characters in both strings. For every character in the first string, I increase its count, and for every character in the second string, I decrease its count.

If all character counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Two strings are anagrams if they contain the same characters with the same frequency.

### Status

Solved on LeetCode.