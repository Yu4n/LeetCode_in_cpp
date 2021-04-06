//
// Created by Yu4n on 2021-03-03.
//

#ifndef LEETCODE_IN_CPP_SHUFFLE_H
#define LEETCODE_IN_CPP_SHUFFLE_H
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res(2*n);
    int m = n;
    for(int i = 0; i < m; i++, n++){
        res[2*i] = nums[i];
        res[2*i+1] = nums[n];
    }
    return res;
}
#endif //LEETCODE_IN_CPP_SHUFFLE_H
