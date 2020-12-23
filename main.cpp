#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int knapsack_full(int num, int cap, int wt[], int val[]){
    int dp[num+1][cap+1];
    for (int j = 0; j <= num; ++j)
        for(int i = 1; i <= cap; ++i)
            dp[j][i] = -1;

    for (int i = 0; i <= num; ++i)
        dp[i][0] = 0;

    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= cap; ++j){
            if (wt[i-1] > j){
                dp[i][j] = dp[i-1][j];
            } else{
                int prior = dp[i-1][j-wt[i-1]];
                int temp;
                if (prior != -1){
                    temp = val[i-1]+dp[i-1][j-wt[i-1]];
                } else{
                    temp = -1;
                }
                dp[i][j] = std::max(temp,dp[i-1][j]);
//                if (dp[i-1][j] != -1)
//                    dp[i][j] = std::max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
//                else
//                    dp[i][j] = dp[i-1][j];
            }
        }
    }
    if (dp[num][cap] == -1)
        return 0;
    else
        return dp[num][cap];
}

int main() {
    int times;
    cin >> times;
    for (int t = 0; t < times; ++t){
        int num, cap;
        cin >> num >> cap;
        int wt[num], val[num];
        for(int nu = 0; nu < num; ++nu){
            cin >> wt[nu] >> val[nu];
        }
        cout << knapsack_full(num, cap, wt, val) << endl;
    }
//    int wt[] = {1,2,6}, val[] = {3,5,2};
//    cout << knapsack_full(5,4,wt,val);
    return 0;
}