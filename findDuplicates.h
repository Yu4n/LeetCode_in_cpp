//
// Created by Yu4n on 2020-11-30.
//

#ifndef LEETCODE_IN_CPP_FINDDUPLICATES_H
#define LEETCODE_IN_CPP_FINDDUPLICATES_H
#include <vector>
#include <cmath>
using std::vector;
// 4,3,2,7,8,2,3,1
vector<int> findDuplicates(vector<int>& nums){
    vector<int> res;
    for(int i=0;i!=nums.size();i++){
        int m = abs(nums[i]) - 1;
        nums[m] = -nums[m];
        if(nums[m] > 0)
            res.push_back(abs(nums[i]));
    }
    return res;
}
#endif //LEETCODE_IN_CPP_FINDDUPLICATES_H
