//
// Created by Yu4n on 2020-12-01.
//

#ifndef LEETCODE_IN_CPP_FIRSTMISSINGPOSITIVE_H
#define LEETCODE_IN_CPP_FIRSTMISSINGPOSITIVE_H

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++)
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
            std::swap(nums[i], nums[nums[i] - 1]);
    for (int i = 0; i < n; i++)
        if (nums[i] != i + 1)
            return i + 1;
    return n + 1;
}
#endif //LEETCODE_IN_CPP_FIRSTMISSINGPOSITIVE_H
