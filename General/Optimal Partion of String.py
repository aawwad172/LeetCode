class Solution:
    def partitionString(self, s: str) -> int:
        result = 1

        i = 0
        table = {}
        while i < len(s):
            if s[i] not in table:
                table[s[i]] = None
                i += 1
            else:
                result += 1
                table.clear()

        return result
