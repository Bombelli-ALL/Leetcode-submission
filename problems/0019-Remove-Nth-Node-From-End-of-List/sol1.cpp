// ==========================================================
// 19. Remove Nth Node From End of List
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 14.9 MB (Beats 94%)
// Link       : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// ==========================================================

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp = head;      // fix: initialize before use
        int size = 0;
        while (tmp) {
            tmp = tmp->next;
            size++;
        }

        ListNode dummy(0);         // fix: dummy node handles "remove head" case
        dummy.next = head;
        tmp = &dummy;

        for (int i = 0; i < size - n; i++)   // walk to node just before target
            tmp = tmp->next;

        ListNode *delet = tmp->next;