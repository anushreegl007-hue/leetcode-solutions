# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to check whether the brackets are correctly matched. Opening brackets are pushed into the stack. When a closing bracket is found, I check whether it matches the bracket at the top of the stack.

If all brackets are matched correctly and the stack is empty at the end, the parentheses are valid.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

The stack follows the Last In, First Out (LIFO) principle, which is useful for matching brackets in the correct order.

### Status

Solved on LeetCode.
