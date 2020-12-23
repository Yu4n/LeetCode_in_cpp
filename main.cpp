#include <iostream>

int m,n;
int capacity;
int sizes[501];
int values[501];
int dp[501][101];
int max(int a,int b){
    return a>=b?a:b;
}
int kn(int n,int c,int sizes[], int values[]){
    for(int i =1;i<=n;++i){
        for (int j = 1; j <= c; ++j)
        {
            if (sizes[i] > j) // 当前背包的容量 j 放不下第 i 件商品时
            {
                dp[i][j] = dp[i-1][j]; // 放弃第 i 件商品，拿第 i - 1 件商品
            }
            else
            {
                dp[i][j] = max(dp[i-1][j-sizes[i]]+values[i],dp[i-1][j]);
            }
        }
    }
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
        v = kn(n,capacity,sizes,values);
        std::cout << v << std::endl;
    }
    return 0;
}