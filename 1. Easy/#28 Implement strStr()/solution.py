class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        M, N = len(haystack), len(needle)
        for i in range(M - N + 1):
            if haystack[i : i + N] == needle:
                return i
        return -1