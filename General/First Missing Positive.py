class Solution:
    def firstMissingPositive(self, nums: list[int]) -> int:
        n = len(nums)
        # Loop to remove the negative values
        for i in range(n):
            if nums[i] < 0:
                nums[i] = 0

        # Negating the values that appears
        for i in range(n):
            idx = abs(nums[i])
            if idx in range(1, n + 1):
                if nums[idx - 1] > 0:
                    nums[idx - 1] *= -1
                elif nums[idx - 1] == 0:
                    nums[idx - 1] = -1 * (n + 1)

        # Scan for the missing value
        for i in range(1, n + 1):
            if nums[i - 1] >= 0:
                return i

        return n + 1


print(Solution.firstMissingPositive(Solution, [1, 2, 0]))
print(Solution.firstMissingPositive(Solution, [3, 4, -1, 1]))
print(Solution.firstMissingPositive(Solution, [7, 8, 9, 11, 12]))
