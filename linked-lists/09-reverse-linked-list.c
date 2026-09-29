#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node.
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to reverse the linked list
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    
    while (curr != NULL) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse current node's pointer
        prev = curr;        // Move prev forward
        curr = next;        // Move curr forward
    }
    
    return prev; // New head of reversed list
}

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print a linked list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Typical Case
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    
    printf("Original: ");
    printList(head1);
    struct ListNode* reversed1 = reverseList(head1);
    printf("Reversed: ");
    printList(reversed1);

    return 0;
}