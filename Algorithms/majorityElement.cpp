//
// Created by Yu4n on 2021-04-08.
//

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> freq;
    for (auto& num : nums) {
        freq[num]++;
        if (freq[num] > n / 2) return num;
    }
    return -1;  // on error
}