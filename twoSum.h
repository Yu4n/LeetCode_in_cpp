//
// Created by Yu4n on 2020-10-29.
//
#ifndef LEETCODE_IN_CPP_TWOSUM_H
#define LEETCODE_IN_CPP_TWOSUM_H

// #include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> imap;

    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);

        if (it != imap.end())
            return std::vector<int> {i, it->second};

        imap[nums[i]] = i;
    }
}
vector<int> twoSum1(vector<int>& nums, int target) {
    vector<int> temp;
    bool flag = false;
    for(int i=1; i<nums.size(); i++){
        for(int j = 0; j<i; j++){
            if(nums.at(i)+nums.at(j)==target){
                temp.push_back(i);
                temp.push_back(j);
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    return temp;
}
#endif //LEETCODE_IN_CPP_TWOSUM_H
