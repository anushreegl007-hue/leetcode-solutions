## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Used an iterative three-pointer approach (`prev`, `curr`, `next`) to reverse the directions of the pointers in a single traversal through the linked list. `prev` keeps track of the reversed portion while `curr` updates each node's `next` pointer backward.

### Complexity
- Time: $O(n)$ where $n$ is the number of nodes in the linked list.
- Space: $O(1)$ since pointer manipulation is performed in-place.

### Notes
Handling empty lists (`NULL`) or single-node lists as edge cases requires zero special conditions as the `while (curr != NULL)` loop naturally handles both safely.