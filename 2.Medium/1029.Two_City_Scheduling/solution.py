def diff(l):
    return l[0]-l[1]

class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        # costs : [[10, 20],[30, 200],[400, 50],[30, 20]]
        #            0, 10    0, 170   350,  0   10,  0
        #             -10      -170      350        10
        # 貪心演算法-> 差值最大的先選
        # 加入 a 隊要多付多少錢： -10,-170,350,10
        # Greedy （貪心,貪婪）: -170, -10, 10, 350
        
        costs.sort(key=diff)
        
        ans = 0
        countA = 0
        countB = 0
        for costA, costB in costs:
            if countA < len(costs)//2:
                ans += costA
                countA += 1
            else:
                ans += costB
                countB += 1
        return ans