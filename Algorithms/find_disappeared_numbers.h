//
// Created by Yu4n on 2020-11-30.
//

#ifndef LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H
#define LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H

// Firstly, It is very intuitive to come up with
// using O(N) space to store the information.
// e.g. [4, 3, 2, 7, 8, 2, 3, 1] we can use
// a binary array (O(N) space) to count it. [1, 1, 1, 1, 0, 0, 1, 1]
// Note that it has the same amount of information with [-, -, -, -, +, +, -, -].
// you can just attach these information on the original array
// without generating a new array. That's the whole point.

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int len = nums.size();
    vector<int> res;
    for(int i=0; i<len; i++) {
        int m = abs(nums[i])-1; // index start from 0
        nums[m] = nums[m] > 0 ? -nums[m] : nums[m];
    }
    for(int i = 0; i<len; i++) {
        if(nums[i] > 0) res.push_back(i+1);
    }
    return res;
}

#endif //LEETCODE_IN_CPP_FIND_DISAPPEARED_NUMBERS_H
