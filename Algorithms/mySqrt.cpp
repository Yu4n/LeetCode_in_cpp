//
// Created by Yu4n on 2021-05-23.
//

int mySqrt(int x) {
    int l = 0, r = x, mid, res = -1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if ((long) mid * mid <= x) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}