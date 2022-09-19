int maxProfit(int* prices, int pricesSize){
    int total = 0;
    for (int i = 0; i+1 < pricesSize; i++)
    {
        if (prices[i] < prices[i+1])
        {
            total += prices[i+1] - prices[i];
        }
    }
    return total;
}