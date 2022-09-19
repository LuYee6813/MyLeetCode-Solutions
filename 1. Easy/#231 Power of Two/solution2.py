def isPowerOfTwo(n):
    return n > 0 and n&(n-1) == 0

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return(isPowerOfTwo(n))