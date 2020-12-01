#include <string.h>
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <class T> void check_and_print(T &vec){
    cout << "Size: " << vec.size() << "\nContent: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << (it != vec.end() - 1 ? "," : "");
    cout << "]\n";
}

int main(){
    int cnt;
    cin >> cnt;
    for(int c=0;c!=cnt;++c) {
        int M, N;
        cin >> N >> M;//M是乘号个数， N是字符串长度
        char str[N + 1];
        cin >> str;
        int dp[N + 1][M + 1];
        int data[N + 1][N + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < N; i++) {
            int jojo = 0;
            for (int j = i; j < N; j++) {
                jojo = jojo * 10 + str[j] - '0';
                data[i][j] = jojo;
            }
        }
        for (int i = 0; i < N; i++) {
            dp[i][0] = data[0][i];
        }
        for (int i = 0; i < N; i++) {
            for (int j = 1; j <= M; j++) {
                for (int k = 0; k < i; k++) {
                    dp[i][j] = std::max(dp[k][j - 1] * data[k + 1][i], dp[i][j]);
                }
            }
        }
        cout << dp[N - 1][M] << endl;
    }
    return 0;
}