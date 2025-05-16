class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        frequencies: dict[int, int] = {}

        for num in nums:
            frequencies[num] = frequencies.get(num, 0) + 1

        return max(frequencies, key=frequencies.get)
