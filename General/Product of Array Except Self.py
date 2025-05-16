class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        # Calculate the Prefix arr
        prefix = [1] * len(nums)
        for i in range(1, len(nums)):
            prefix[i] = nums[i - 1] * prefix[i - 1]

        postfix = [1] * len(nums)
        # Calculate the Postfix arr
        for i in range(len(nums) - 2, -1, -1):
            postfix[i] = nums[i + 1] * postfix[i + 1]

        return [prefix[i] * postfix[i] for i in range(len(nums))]


print(Solution.productExceptSelf(Solution, nums=[1, 2, 3, 4]))
