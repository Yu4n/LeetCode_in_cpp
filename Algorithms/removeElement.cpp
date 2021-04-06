//
// Created by Yu4n on 2021-03-20.
//

int removeElement(vector<int>& nums, int val) {
    for(auto it = nums.begin(); it != nums.end(); ){
        if(*it == val){
            it = nums.erase(it);
        } else{
            ++it;
        }
    }
    return nums.size();
}
