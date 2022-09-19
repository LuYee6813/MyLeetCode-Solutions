int maxProfit(int* prices, int pricesSize){
    int b=0;
    int c=0;
    int d=0;
    int profit=0;
    for (int i = 0; i < pricesSize; i++)
    {
        if (b == pricesSize - 1) { 
            profit = 0;
        }
        else
        {
            if (prices[b] > prices[b+1] || prices[b] == prices[b+1]) 
            {
                b+=1; 
            }
            else 
            {
                c = prices[b]; 
                if (c < prices[b+d]) 
                {
                    profit += prices[b+d] - c;
                    b = b+d;
                }
                else
                {
                    d+=1; 
                }
            }       
        }
    }
    return profit;
}