class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        table = {}
        n = len(nums)

        for i in range(n):
            complement = target - nums[i]
            if complement in table:
                return [table[complement], i]
            table[nums[i]] = i

        return [] #if no solution