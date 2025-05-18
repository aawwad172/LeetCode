class Solution:
    def reverseWords(self, s: str) -> str:
        # =================================
        # My first Solution:

        # Remove leading and tailing spaces
        # while s[0] == " ":
        #     s = s.removeprefix(" ")

        # while s[len(s) - 1] == " ":
        #     s = s.removesuffix(" ")

        # # Remove the Additional Spaces in between
        # word = ""
        # words = []
        # i = 0
        # while i < len(s):
        #     if s[i] == " ":
        #         if s[i + 1] == " ":
        #             i += 1
        #             continue
        #         words.append(word)
        #         words.append(" ")
        #         word = ""
        #         i += 1
        #         continue
        #     word += s[i]
        #     i += 1

        # # add last word
        # words.append(word)

        # result = ""
        # j = len(words) - 1
        # while j >= 0:
        #     result += words[j]
        #     j -= 1

        # return result
        # =================================

        # Enhanced Solution
        s = s.strip()
        words = s.split()
        return " ".join(words[::-1])


print(Solution().reverseWords("  hello world  "))
print(Solution().reverseWords("the sky is blue"))
print(Solution().reverseWords("a good   example"))
print(Solution().reverseWords("Bob    Loves  Alice  "))
