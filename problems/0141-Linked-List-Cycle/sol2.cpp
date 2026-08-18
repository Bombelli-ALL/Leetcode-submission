// ==========================================================
// 141. Linked List Cycle
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 11 ms (Beats 43%)
// Memory     : 14.3 MB (Beats 11%)
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
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> visited;
        ListNode *tmp = head;
        
        while (tmp != nullptr) {
            if (visited.contains(tmp)) {
                return true;
            }
            visited.insert(tmp);
            tmp = tmp->next;
        }
        
        return false;
    }
};