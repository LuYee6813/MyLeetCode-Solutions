class Solution(object):
    def largestPerimeter(self, A):
        A.sort()
        N = len(A)
        res = 0
        # A[i - 2], A[i - 1], A[i]
        for i in range(N - 1, 1, -1):
            if A[i - 2] + A[i - 1] > A[i]:
                return A[i - 2] + A[i - 1] + A[i]
        return 0
