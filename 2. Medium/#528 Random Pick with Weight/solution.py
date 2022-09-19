class Solution:

    def __init__(self, w: List[int]):
        self.__w = w
        a = [None] * len(w)
        a[0] = w[0]
        for i in range(1, len(w)):
            a[i] = a[i-1] + w[i]
        self.__a = a
        print(a)
        
    def pickIndex(self) -> int:
        d = random.randrange(self.__a[-1])
        for i, c in enumerate(self.__a):
            if d < c:
                return i    
        

        # 累積圖概念解題
        # a[0] = w[0]
        # a[1] = a[0] + w[1]
        # a[2] = a[1] + w[2]

        # 運作邏輯舉例
        #     0  1  2
        # w: [1, 3, 3]

        #        1        4       7   <- a : 紀錄變化數字的指標位置
        #        V        V       V
        # d:  0  1  2  3  4  5  6     <- d :是從中隨機選一個
        # l: [0, 1, 1, 1, 2, 2, 2]    <- l :與 w 成正比產生造成需資源太多故用 a 取代

        #     0  1  2  <- i
        # a: [1, 4, 7] <- c

