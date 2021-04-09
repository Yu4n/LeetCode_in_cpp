//
// Created by Yu4n on 2021-04-09.
//

int findDuplicate(vector<int>& nums) {
    int m;
    for(int i=0;i!=nums.size();i++){
        m = abs(nums[i]) - 1;
        nums[m] = -nums[m];
        if(nums[m] > 0)
            return abs(nums[i]);
    }
    return 0;
}