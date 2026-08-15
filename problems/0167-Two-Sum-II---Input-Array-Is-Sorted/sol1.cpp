// ==========================================================
// 167. Two Sum II - Input Array Is Sorted
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 19.5 MB (Beats 66%)
// Link       : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int target_matche;
        int i = 0;
        int j =  numbers.size()  - 1;
        vector<int> resulte;
        while (i < j) {
            target_matche = numbers[i] + numbers[j];
            if (target_matche > target)
                j -= 1;
            else if (target_matche < target)
                i += 1;
            else
            {
                resulte.push_back(i + 1);
                resulte.push_back(j + 1);
                return resulte;