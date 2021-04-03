//
// Created by Yu4n on 2021-04-03.
//

int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int, int> frequencies;
    for (int num : nums) {
        frequencies[num]++;
    }

    int numPairs = 0;
    for (auto& freq_pair : frequencies) {
        if (freq_pair.second > 1) {
            numPairs += freq_pair.second * (freq_pair.second - 1) / 2;
        }
    }
    return numPairs;
}