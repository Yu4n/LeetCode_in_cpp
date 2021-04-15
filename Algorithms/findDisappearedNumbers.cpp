//
// Created by Yu4n on 2021-04-15.
//

vector<int> findDisappearedNumbers(vector<int> &nums) {
    vector<int> res;
    bool flag = false;
    for (int num:nums) {
        if (abs(num) >= nums.size()){
            flag = true;
            continue;
        }
        nums[abs(num)] = - abs(nums[abs(num)]);
    }
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > 0){
            res.push_back(i);
        }
    }
    if (!flag){
        res.push_back(nums.size());
    }
    return res;
}

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