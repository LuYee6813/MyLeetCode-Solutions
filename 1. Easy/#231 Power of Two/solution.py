def isPowerOfTwo(n):
    if n <= 0:
        return False
    else:
        return math.log2(n).is_integer()

class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        return(isPowerOfTwo(n))