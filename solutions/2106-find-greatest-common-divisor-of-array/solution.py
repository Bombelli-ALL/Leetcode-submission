class Solution:
    def findGCD(self, nums: List[int]) -> int:
        l = max(nums)
        m = min(nums)

        n = m
        while True:
            if l % n  == 0 and m % n == 0:
                return n
            n = n - 1  
        

        
