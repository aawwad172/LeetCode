class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        result = ''
        while columnNumber > 0:
            remainder = (columnNumber - 1) % 26
            result += chr(ord('A') + remainder)
            columnNumber = (columnNumber - 1) // 26
        return result[::-1]
    
print(Solution.convertToTitle(Solution, 1000))