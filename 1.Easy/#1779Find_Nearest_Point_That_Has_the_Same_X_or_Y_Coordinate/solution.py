class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        temp = 0
        min_D = 100000
        index = -1
        
        for i in range(len(points)):
            if x == points[i][0] or y == points[i][1]:
                temp = abs(points[i][0] - x) + abs(points[i][1] - y)
                if temp < min_D:
                    min_D = temp
                    index = i
        
        if min_D == 100000: 
            return -1
        else:
            return index
            