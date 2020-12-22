//
// Created by Yu4n on 2020-12-22.
//

#ifndef LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
#define LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
// https://leetcode.com/problems/longest-increasing-subsequence/discuss/74848/9-lines-C%2B%2B-code-with-O(NlogN)-complexity
int lengthOfLIS(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++) {
        auto it = std::lower_bound(res.begin(), res.end(), nums[i]);
        if(it==res.end()) res.push_back(nums[i]);
        else *it = nums[i];
    }
    return res.size();
}
#endif //LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
