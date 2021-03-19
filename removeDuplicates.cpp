//
// Created by Yu4n on 2021-03-19.
//

int removeDuplicates(vector<int>& nums) {
    if(nums.empty())
        return 0;
    int tmp = nums[0];
    for(auto it = nums.begin() + 1; it != nums.end(); ){
        if(tmp == *it){
            it = nums.erase(it);
        }
        else{
            tmp = *it;
            ++it;
        }
    }
    return nums.size();
}