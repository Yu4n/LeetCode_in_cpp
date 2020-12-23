//
// Created by Yu4n on 2020-12-23.
//

#ifndef LEETCODE_IN_CPP_PARTITION_EQUAL_SUBSET_SUM_H
#define LEETCODE_IN_CPP_PARTITION_EQUAL_SUBSET_SUM_H
bool canPartition(vector<int>& nums) {
    bitset<10001> bits(1);
    int sum = accumulate(nums.begin(), nums.end(), 0);
    for (auto n : nums) bits |= bits << n;
    return !(sum & 1) && bits[sum >> 1];
}
#endif //LEETCODE_IN_CPP_PARTITION_EQUAL_SUBSET_SUM_H
