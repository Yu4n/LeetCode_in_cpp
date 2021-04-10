//
// Created by Yu4n on 2021-04-10.
//

int trailingZeroes(int n) {
    int res = 0;
    for (int i = 5; i <= n; i *= 5)
        res += n / i;
    return res;
}