//
// Created by Yu4n on 2020-11-30.
//

#ifndef LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H
#define LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H
#include <vector>
#include <cmath>
using std::vector;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int len = nums.size();
    for(int i=0; i<len; i++) {
        int m = abs(nums[i])-1; // index start from 0
        nums[m] = nums[m]>0 ? -nums[m] : nums[m];
    }
    vector<int> res;
    for(int i = 0; i<len; i++) {
        if(nums[i] > 0) res.push_back(i+1);
    }
    return res;
}
#endif //LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H
