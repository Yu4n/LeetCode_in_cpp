//
// Created by Yu4n on 2021-04-05.
//

string truncateSentence(string s, int k) {
    int i;
    for (i = 0; i < s.size(); ++i) {
        if(k == 0){
            break;
        }
        else if (s[i] != ' '){
            continue;
        } else {
            k--;
        }
    }
    if(s[i-1] == ' ')
        return s.substr(0,i-1);
    return s.substr(0,i);
}