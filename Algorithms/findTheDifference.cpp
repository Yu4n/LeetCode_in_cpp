//
// Created by Yu4n on 2021-04-11.
//

char findTheDifference(string s, string t) {
    int n = t.size();
    char c = t[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        c ^= s[i];
        c ^= t[i];
    }
    return c;
}