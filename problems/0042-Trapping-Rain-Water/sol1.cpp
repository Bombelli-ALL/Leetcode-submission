// ==========================================================
// 42. Trapping Rain Water
// Difficulty : Hard
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 25.9 MB (Beats 78%)
// Link       : https://leetcode.com/problems/trapping-rain-water/
// ==========================================================

            if (left_max < right_max){
                l++;
                left_max = max(left_max, height[l]);
                resulte += left_max - height[l];
            }
            else
            {
                r--;
                right_max = max(right_max, height[r]);
                resulte += right_max - height[r];
            }
        }
        return resulte;
        
    }
};
