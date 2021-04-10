//
// Created by Yu4n on 2021-04-10.
//

int hammingDistance(int x, int y) {
    int dist = 0, n = x ^ y;
    while (n) {
        ++dist;
        n &= n - 1;
    }
    return dist;
}