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