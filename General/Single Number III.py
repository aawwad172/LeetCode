from typing import List


class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        xor = 0
        # xor all the array to cancel all the duplication
        for n in nums:
            xor ^= n

        # Find the rightmost set bit (difference bit between a and b)
        diff_bit = xor & -xor

        a = 0
        b = 0
        for n in nums:
            if diff_bit & n:
                a = a ^ n
            else:
                b = b ^ n

        return [a, b]
