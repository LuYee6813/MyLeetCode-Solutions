class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        #  先照著身高排序後數較大的在後面
        people.sort(key=lambda l: (-l[0], l[1]))
        
        # 再用後指標插入位置回傳
        answer = []
        for l in people:
            answer.insert(l[1],l)
            
        return answer