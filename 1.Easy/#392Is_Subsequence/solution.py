class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        l = [-1]
        for c in s:
            j = t.find(c, l[-1]+1)
            if j == -1:
                return False
            l += [j]
            
        return True