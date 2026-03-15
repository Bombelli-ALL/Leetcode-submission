class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1.extend(nums2)
        ele = sorted(nums1)
        l = len(nums1)
        if l % 2 == 1:
          m = float(ele[(l // 2)])
        else:
          m = float((ele[(l // 2) - 1] + ele[l // 2]) / 2)
        return m
