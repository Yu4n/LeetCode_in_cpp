//
// Created by Yu4n on 2020-10-29.
//
#ifndef LEETCODE_IN_CPP_TWOSUM_H
#define LEETCODE_IN_CPP_TWOSUM_H

#include <unordered_map>
#include <vector>
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> imap;

    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);

        if (it != imap.end())
            return std::vector<int> {i, it->second};

        imap[nums[i]] = i;
    }
}
#endif //LEETCODE_IN_CPP_TWOSUM_H
