//
// Created by Yu4n on 2021-04-15.
//

int missingNumber(vector<int> &nums) {
    bool zeroflag = false;
    for (int i = 0; i < nums.size(); ++i) {
        if (abs(nums[i]) == nums.size()) {
            continue;
        }
        if (nums[abs(nums[i])] == 0) {
            zeroflag = true;
        }
        nums[abs(nums[i])] = -nums[abs(nums[i])];
    }
    for (int i = 0; i < nums.size(); ++i) {
        if (zeroflag && nums[i] > 0) {
            return i;
        } else if (!zeroflag && nums[i] >= 0) {
            return i;
        }
    }
    return nums.size();
}