#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int knapsack(int num, int cap, int wt[], int val[]){
    int dp[num+1][cap+1];
    for(int i = 0; i <= cap; ++i){
        dp[0][i] = 0;
    }
    for(int i = 0; i <= num; ++i){
        dp[i][0] = 0;
    }
    for(int i = 1; i <= num; ++i){
        for(int j = 1; j <= cap; ++j){
            if (wt[i-1] > j){
                dp[i][j] = dp[i-1][j];
            } else{
                dp[i][j] = std::max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
            }
        }
    }
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
        cout << knapsack(num, cap, wt, val) << endl;
    }
    return 0;
}