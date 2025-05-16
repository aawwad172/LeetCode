class Solution:
    def reverseWords(self, s: str) -> str:
        # Remove leading and tailing spaces
        while s[0] != " " and s[len(s) - 1] == " ":
            s = s.removeprefix(" ")
            s = s.removesuffix(" ")

        # Remove the Additional Spaces in between
        result = ""
        i = 0
        while i < len(s) - 1:
            if s[i] == " " and s[i + 1] == " ":
                i += 1
                continue
            result += s[i]
            i += 1

        return result


obj = Solution()

print(obj.reverseWords("  hello world  "))
