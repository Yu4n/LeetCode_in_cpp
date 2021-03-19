//
// Created by Yu4n on 2021-03-19.
//

int removeDuplicates(vector<int>& nums) {
    if(nums.empty())
        return 0;
    int tmp = nums[0], cnt = 1;
    for(auto it = nums.begin() + 1; it != nums.end(); ){
        if(tmp == *it){
            ++cnt;
            ++it;
        }
        else{
            tmp = *it;
            cnt = 1;
            ++it;
        }
        if(cnt > 2){
            it = nums.erase(it-cnt+2, it);
            cnt--;
        }
    }
    return nums.size();
}