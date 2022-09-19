class Solution:

    def __init__(self, w: List[int]):
        self.__w = w
        a = [None] * len(w)
        a[0] = w[0]
        for i in range(1, len(w)):
            a[i] = a[i-1] + w[i]
        self.__a = a

    def pickIndex(self) -> int:
        d = random.randrange(self.__a[-1])

        # 二元搜尋法
        l, r = 0, len(self.__a)
        while l < r:
            mid = (l+r) // 2
            if d < self.__a[mid]:
                if mid == 0 or d >= self.__a[mid-1]:
                    return mid
                r = mid
            else:
                l = mid + 1