//
// Created by Yu4n on 2020-12-07.
//

#ifndef LEETCODE_IN_CPP_CLIMBSTAIRS_H
#define LEETCODE_IN_CPP_CLIMBSTAIRS_H
int climbStairs(int n) {
    vector<int> vec{1,2};
    if (n <= 2)
        return n-1;
    for(int i=2;i<n;i++){
        int r = vec[i-2] + vec[i-1];
        vec.push_back(r);
    }
    return vec.back();
}
#endif //LEETCODE_IN_CPP_CLIMBSTAIRS_H
