// ==========================================================
// 141. Linked List Cycle
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 170 ms (Beats 5%)
// Memory     : 12.8 MB (Beats 12%)
// Link       : https://leetcode.com/problems/linked-list-cycle/
// ==========================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *tmp;
        vector<ListNode * > arr;
        tmp = head;
        while (tmp != nullptr){
            if (std::ranges::contains(arr, tmp))
                return true;
            arr.push_back(tmp);
            tmp = tmp->next;
        }
        return false;
    }
};