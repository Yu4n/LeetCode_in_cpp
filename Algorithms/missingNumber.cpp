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

int missingNumber(vector<int> &nums) {
    int n = nums.size(), act_sum = 0;
    int expected_sum = n * (n + 1) / 2;
    for (int num: nums) {
        act_sum += num;
    }
    return expected_sum - act_sum;
}

// similar to find first missing positive
int missingNumber(vector<int> &nums) {
    int i = 0;
    int n = nums.size();
    while (i < n) {
        if (nums[i] >= 0 && nums[i] < n && nums[nums[i]] != nums[i])
            std::swap(nums[i], nums[nums[i]]);
        else
            i++;
    }
    for (i = 0; i < n; ++i)
        if (nums[i] != i)
            return i;
    return n;
}