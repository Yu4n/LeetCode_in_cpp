// Generic way to solve "K repeat 1 single" problems

int getSingleNumber(vector<int> &arr, int K) {
    long long singleNumber = 0;
    for (int bit = 0; bit < 32; bit++) {
        int bitCount = 0;
        for (auto &val : arr) {
            if (val & (1LL << bit))
                bitCount++;
        }
        if (bitCount % K == 1)
            singleNumber |= 1LL << bit;
    }
    return (int) singleNumber;
}

int singleNumber(vector<int> &nums) {
    return getSingleNumber(nums, 3);
}