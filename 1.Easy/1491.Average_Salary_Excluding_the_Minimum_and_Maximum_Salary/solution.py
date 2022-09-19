class Solution:
    def average(self, salary: List[int]) -> float:
        max = salary[0]
        min = salary[0]
        c = 0
        for i in salary:
            max = i if i > max else max
            min = i if i < min else min   
            c+=i
        return (c-min-max) / (len(salary)-2)