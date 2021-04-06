//
// Created by Yu4n on 2021-04-06.
//

bool areAlmostEqual( string &s1,  string &s2) {
    if(s1 == s2)
        return true;
    char c1 = ' ', c2;
    for (int i = 0; i < s1.size(); ++i) {
        if (c1 == ' ' && s1[i] != s2[i]){
            c1 = s1[i];
            c2 = s2[i];
            s2[i] = c1;
        } else if(s2[i] == c1 && s1[i] == c2){
            s2[i] = s1[i];
            return s1 == s2;
        }
    }
    return false;
}