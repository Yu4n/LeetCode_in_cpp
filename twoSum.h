//
// Created by Yu4n on 2020-10-29.
//
#include <unordered_map>
#include <vector>
using namespace std;
#ifndef LEETCODE_IN_CPP_TWOSUM_H
#define LEETCODE_IN_CPP_TWOSUM_H
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;

    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);

        if (it != imap.end())
            return vector<int> {i, it->second};

        imap[nums[i]] = i;
    }
}
#endif //LEETCODE_IN_CPP_TWOSUM_H
