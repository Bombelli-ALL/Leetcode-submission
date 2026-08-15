// ==========================================================
// 11. Container With Most Water
// Difficulty : Medium
// Language   : C++
// Solution   : #1
// Runtime    : 1 ms (Beats 45%)
// Memory     : 63 MB (Beats 50%)
// Link       : https://leetcode.com/problems/container-with-most-water/
// ==========================================================

    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int max = 0;
        int area;
        while (i < j){
            area = min(heights[i], heights[j]) * (j - i);
            if (area > max)
                max = area;
            if (heights[i] > heights[j])
                j -= 1;
            else
                i += 1;
        }
        return max;
    }
};