class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        ns = str(n)
        ans = 0
        temp1=1
        temp2=0
        for i in range(len(ns)):
            temp1 *= int(ns[i])
            temp2 += int(ns[i])
        ans = temp1 - temp2
        # print(f"temp1:{temp1} temp2:{temp2} ans:{ans}")
        return ans