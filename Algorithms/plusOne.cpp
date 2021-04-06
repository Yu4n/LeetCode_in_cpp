//
// Created by Yu4n on 2021-03-22.
//

vector<int> plusOne(vector<int>& digits) {
    for(int i = digits.size() - 1; i >= 0; --i){
        if(digits[i] == 9){
            digits[i] = 0;
        } else{
            digits[i] += 1;
            return digits;
        }
    }
    digits.push_back(0); // just push_back(0) and change the value in 0 index
    digits[0] = 1;
    return digits;
}