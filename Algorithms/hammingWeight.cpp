//
// Created by Yu4n on 2021-04-10.
//

int hammingWeight(uint32_t n) {
    int res = 0;
    for (int i = 0; i < 32; ++i) {
        if (n & 1) {
            res += 1;
        }
        n >>= 1;
    }
    return res;
}

int hammingWeightI(uint32_t n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}