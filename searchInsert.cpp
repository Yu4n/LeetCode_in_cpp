//
// Created by Yu4n on 2021-03-24.
//

int searchInsert(vector<int>& nums, int target) {
    if(target <= nums[0])
        return 0;
    for(int i = 1; i < nums.size(); ++i)
        if (target <= nums[i] && target >= nums[i-1])
            return i;
    return nums.size();
}