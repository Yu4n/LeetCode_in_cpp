//
// Created by Yu4n on 2020-10-29.
//
#ifndef LEETCODE_IN_CPP_TWOSUM_H
#define LEETCODE_IN_CPP_TWOSUM_H

vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int,int> mp;
    for(int i = 0; ; ++i){
        if(mp.find(target - nums[i]) != mp.end()){
            return vector<int> {i, mp.find(target - nums[i])->second};
        }
        mp[nums[i]] = i;
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
