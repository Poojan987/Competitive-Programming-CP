# TC - O(n)

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        curr = 0
        maxx = 0
        for i in range(len(nums)):
            if curr + nums[i] > curr:
                curr += 1
                maxx = max(curr, maxx)
            else:
                curr = 0
        return maxx
