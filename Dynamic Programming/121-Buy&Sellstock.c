int maxProfit(int* prices, int pricesSize) {
    int maxprofit = 0;
    int minprice = prices[0];
    for (int i = 0; i < pricesSize; i++){
        if (minprice > prices[i]){
            minprice = prices[i];
        }
        int profit = prices[i] - minprice;
        if (profit > maxprofit){
            maxprofit = profit;
        }
        
    }
    return maxprofit;
}