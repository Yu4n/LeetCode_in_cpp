//
// Created by Yu4n on 2021-03-24.
//

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    int n = nums.size();
    if (n < 3)
        return res;
    int l, r;
    std::sort(nums.begin(),nums.end());
    for(int i = 0; i < n - 2; ++i){
        if (i != 0&&nums[i] == nums[i-1]) continue;
        l = i + 1;
        r = n - 1;
        while (l < r){
            int target = nums[i] + nums[l] + nums[r];
            if (target == 0){
                res.push_back({nums[i], nums[l], nums[r]});
                while (l<r-1&&nums[l]==nums[l+1]) l++;
                while (l<r-1&&nums[r]==nums[r-1]) r--;
                l++;
                r--;
            } else if(target < 0){
                l++;

            } else{
                r--;
            }
        }
    }
    return res;
}