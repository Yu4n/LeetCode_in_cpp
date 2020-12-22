//
// Created by Yu4n on 2020-12-07.
//

#ifndef LEETCODE_IN_CPP_COUNTBITS_H
#define LEETCODE_IN_CPP_COUNTBITS_H
// https://leetcode.com/problems/counting-bits/discuss/79527/Four-lines-C%2B%2B-time-O(n)-space-O(n)
vector<int> countBits(int num) {
    vector<int> ret(num+1, 0);
    for (int i = 1; i <= num; ++i)
        ret[i] = ret[i&(i-1)] + 1;
    return ret;
}

// i&(i-1) drops the lowest set bit. For example: i = 14,
// its binary representation is 1110, so i-1 is 1101, i&(i-1) = 1100,
// the number of "1" in its binary representation decrease one,
// so ret[i] = ret[i&(i-1)] + 1.

#endif //LEETCODE_IN_CPP_COUNTBITS_H
