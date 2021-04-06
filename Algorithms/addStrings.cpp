//
// Created by Yu4n on 2021-03-08.
//

string addStrings(string num1, string num2) {
    string ans;
    int carry = 0;
    int idx1 = num1.size() - 1, idx2 = num2.size() - 1;
    while(idx1 > -1 || idx2 > -1) {
        int d1 = (idx1 >= 0) ? num1[idx1] - '0' : 0;
        int d2 = (idx2 >= 0) ? num2[idx2] - '0' : 0;
        // This usage of carry is the same as addTwoNumbers.cpp.
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        ans += '0' + (sum % 10);
        idx1--;
        idx2--;
    }
    if(carry == 1){
        ans.append("1");
    }
    reverse(ans.begin(), ans.end());
    return ans;
}