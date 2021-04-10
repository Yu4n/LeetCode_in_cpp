//
// Created by Yu4n on 2021-04-10.
//

int totalHammingDistance(vector<int> &nums) {
    int total_distance = 0;
    for (int i = 0; i < 32; i++) {
        int ones = 0;
        for (int num : nums) ones += (num >> i) & 1;
        total_distance += ones * (nums.size() - ones);
    }
    return total_distance;
}
