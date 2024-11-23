class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not nums:
            return []

        # Initializing empty array for the result.
        result = []
        temp = []

        start = 0  # For the start of a Range.
        j = 1  # to Iterate over the list.

        for j in range(
            1, len(nums) + 1
        ):  # Iterate with one step ahead to handle the last element
            # Check if not consecutive or last element
            if j == len(nums) or nums[j] - nums[j - 1] != 1:
                # If the range consists of 1 number
                if start == j - 1:
                    result.append(str(nums[start]))
                else:  # If the range consists of multiple numbers
                    result.append(f"{nums[start]}->{nums[j - 1]}")
                start = j  # Update start to the next element after the current range
        return result
