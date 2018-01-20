
/*

203. Remove Linked List Elements
https://leetcode.com/problems/remove-linked-list-elements/description/

Remove all elements from a linked list of integers that have value val.

Example
Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
Return: 1 --> 2 --> 3 --> 4 --> 5
*/


/*
    COMPLEXITY
    time: O(n)
    space: O(1)
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int k) {
        //check for empty list
        if (head == NULL) {
            return head;
        }
        
        //check list (iterate)
        //reference to head
        ListNode * p = head;
        while (p->next != NULL) {
            //if the next node has the wanted value, unlink it
            if (p->next->val == k) {
                //unlink (this increments too)
                p->next = p->next->next;
            } else {
                //else just increment
                p = p->next;
            }
        }
        
        //check head
        //we actually only check the next node so we miss head
        if (head->val == k) {
            head = head->next;
        }
        
        //to return a whole Linked List, just return the head
        return head;
    }
};