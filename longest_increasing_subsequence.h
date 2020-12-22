//
// Created by Yu4n on 2020-12-22.
//

#ifndef LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
#define LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
// https://leetcode.com/problems/longest-increasing-subsequence/discuss/74848/9-lines-C%2B%2B-code-with-O(NlogN)-complexity
int lengthOfLIS(vector<int>& nums) {
    vector<int> res;
    for(int & num : nums) {
        auto it = std::lower_bound(res.begin(), res.end(), num);
        if(it==res.end()) res.push_back(num);
        else *it = num;
    }
    return res.size();
}
//int lengthOfLIS(vector<int>& nums) {
//    if (nums.empty()){
//        return 0;
//    }
//    vector<int> dp(nums.size());
//    dp[0] = 1;
//    int maxans = 1;
//    for (int i = 1; i < dp.size(); ++i){
//        int maxval = 0;
//        for (int j = 0; j < i; ++j){
//            if (nums[i] > nums[j]){
//                maxval = std::max(maxval, dp[j]);
//            }
//        }
//        dp[i] = maxval + 1;
//        maxans = std::max(maxans, dp[i]);
//    }
//    return maxans;
//}
#endif //LEETCODE_IN_CPP_LONGEST_INCREASING_SUBSEQUENCE_H
