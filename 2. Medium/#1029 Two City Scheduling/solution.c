int diff(int *l) 
{
    return l[0] - l[1];
}

int cmp(const void* p1, const void* p2)
{
    int* l1 = *(const int**)p1;
    int* l2 = *(const int**)p2;
    return diff(l1) - diff(l2);
}

int twoCitySchedCost(int** costs, int costsSize, int* costsColSize)
{
    qsort(costs, costsSize, sizeof(int*), cmp);
    int countA = 0;
    int ans = 0;
    for (int i = 0; i < costsSize; i++)
    {
        int costA = costs[i][0];
        int costB = costs[i][1];
        
        if (countA < costsSize/2) 
        {
            ans += costA;
            countA += 1;
        }
        else
        {
            ans += costB;
        }
    }
    return ans;
} 