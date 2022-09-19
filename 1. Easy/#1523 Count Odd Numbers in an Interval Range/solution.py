# 使用一般%2找奇數會run time error
# 所以使用數學解(奇數+偶數 必為 奇數所以有奇數要加一不然會遺漏)
# 0 ~ N 中找奇數
# case1 如果兩數有一奇數 
# (high - low) / 2 + 1
# case2 都偶數
# (high - low) / 2


class Solution:
    def countOdds(self, low: int, high: int) -> int:
        if (low % 2 == 1 or high % 2 == 1):
            return int((high-low) / 2 + 1)
        else:
            return int((high-low) / 2 )
