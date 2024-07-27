from typing import List
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0:
            return []
        if numRows == 1:
            return [[1]]
        if numRows == 2:
            return [[1], [1, 1]]
        
        triangle = [[1], [1, 1]]
        for i in range(2, numRows):
            previous_row = triangle[i - 1]
            new_row = [1]
            for j in range(1, len(previous_row)):
                x = previous_row[j - 1]
                y = previous_row[j]
                new_row.append(x + y)
            new_row.append(1)
            triangle.append(new_row)
        return triangle


# print(Solution.generate(Solution, numRows=5))