class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ls: list[str] = []
        max_len: int = 0
        
        for i in s:
            if i in ls:
                while ls[0] != i:
                    ls.pop(0)
                ls.pop(0)  # remove i itself
            ls.append(i)  # append i after removing
            
            if len(ls) > max_len:
                max_len = len(ls)
        
        return max_len

