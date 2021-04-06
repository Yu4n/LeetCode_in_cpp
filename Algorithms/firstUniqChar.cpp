//
// Created by Yu4n on 2021-04-06.
//

int firstUniqChar(string s) {
    std::unordered_map<char, int> count;
    for (int i = 0; i < s.size(); ++i)
        count[s[i]] += 1;
    for (int i = 0; i < s.size(); ++i)
        if(count[s[i]] == 1)
            return i;
    return -1;
}

int firstUniqCharBrutalForce(string s) {
    int i, flag;
    for(i = 0; i < s.size(); ++i){
        flag = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[i] == s[j] && i != j){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            return i;
        }
    }
    return -1;
}