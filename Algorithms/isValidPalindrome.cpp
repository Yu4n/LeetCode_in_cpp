//
// Created by Yu4n on 2021-04-08.
//

bool isPalindrome(string s) {
    int low = 0, high = s.size() - 1;
    while (low < high){
        while (!isalnum(s[low]) && low < high){
            low++;
        }
        while (!isalnum(s[high]) && low < high){
            high--;
        }
        if (tolower(s[low++]) != tolower(s[high--])){
            return false;
        }
    }
    return true;
}