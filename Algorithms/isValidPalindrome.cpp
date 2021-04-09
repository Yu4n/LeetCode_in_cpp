//
// Created by Yu4n on 2021-04-08.
//

bool isPalindrome(string s) {
    int low = 0, high = s.size() - 1;
    while (low < high){
        while (!isalnum(s[low])){
            low++;
            if(low > high){
                return true;
            }
        }
        while (!isalnum(s[high])){
            high--;
            if(low > high){
                return true;
            }
        }
        if (tolower(s[low]) != tolower(s[high])){
            return false;
        } else{
            low++;
            high--;
        }
    }
    return true;
}