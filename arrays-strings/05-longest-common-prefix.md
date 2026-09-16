# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used the first string as the initial prefix and compared it with each of the other strings. I checked the characters one by one and shortened the prefix whenever the characters did not match.

If no characters match, there is no common prefix.

### Complexity

* Time: O(n × m)
* Space: O(m)

### Notes

The solution finds the longest prefix that is common to all the given strings.

### Status

Pending on LeetCode.
