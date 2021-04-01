//
// Created by Yu4n on 2021-04-01.
//

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, maxProfit = 0;
    for (int price : prices){
        if(price < minPrice){
            minPrice = price;
        }
        else if(price - minPrice > maxProfit){
            maxProfit = price - minPrice;
        }
    }
    return maxProfit;
}

int maxProfitII(vector<int>& prices) {
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1])
            maxProfit += prices[i] - prices[i - 1];
    }
    return maxProfit;
}

int maxProfitIII(vector<int>& prices) {
    if(prices.size()==1)
        return 0;
    ios::sync_with_stdio(0);
    int t1Cost = INT_MAX, t2Cost = INT_MAX,t1Profit = 0, t2Profit = 0;
    for (int price : prices) {
        t1Cost = min(t1Cost, price); // the maximum profit if only one transaction is allowed
        t1Profit = max(t1Profit, price - t1Cost);
        t2Cost = min(t2Cost, price - t1Profit); // re-invest profit in the second transaction
        t2Profit = max(t2Profit, price - t2Cost);
    }
    return t2Profit;
}