//
// Created by Yu4n on 2021-05-23.
//

double Pow(double x, int n) {
    if (n == 0) {
        return 1;
    }
    double y = Pow(x, n / 2);
    return n % 2 == 0 ? y * y : x * y * y;
}

double myPow(double x, int n) {
    return n >= 0 ? Pow(x, n) : 1.0 / Pow(x, -(n + 1)) / x;  // 当 n = -2 ** -31, -n 会越界，还可以用 long int 记录 n。
}