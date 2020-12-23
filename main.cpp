#include <iostream>

int m,n;
int capacity;
int sizes[501];
int values[501];
int dp[501][101];
int max(int a,int b){
    return a>=b?a:b;
}int kn_full(int n,int c,int sizes[], int values[]){
    int sub_cap;
    int space;
    int i,j;
    for(i=0 ; i<=n ; ++i){
        for(j=0 ; j<=c ; ++j){
            dp[i][j] = -1;
        }
    }
    for(i=0 ; i < n ; ++i){
        dp[i][0]=0;

    }
    for (sub_cap = 1; sub_cap <= c; sub_cap++) {
        for (space = 1; space <= n; space++) {
            if (sub_cap >= sizes[space]) {//判断是否能不能装下
                //能装下，判断装了以后是不是背包的价值更大了
                int prior_value = dp[space - 1][sub_cap - sizes[space]];
                int temp;
                if (prior_value != -1 )
                {
                    temp = dp[space - 1][sub_cap - sizes[space]] + values[space];
                }
                else
                {
                    temp = -1;
                }
                dp[space][sub_cap] = max(dp[space - 1][sub_cap], temp);
            }
            else {
                //装不下的话背包价值还是没有装之前的价值
                dp[space][sub_cap] = dp[space - 1][sub_cap];
            }
        }
    }
    if (dp[n][c] == -1)
        return 0;
    else
        return dp[n][c];
}
int main() {
    int i,j;
    int v;
    std::cin >> m;
    for(i=0; i<m; ++i){
        std::cin >> n >> capacity;
        for(j=1; j<=n; ++j){
            std::cin >> sizes[j] >> values[j];
        }
        v = kn_full(n,capacity,sizes,values);
        std::cout << v << std::endl;
    }
    return 0;
}