//
// Created by Yu4n on 2021-04-11.
//

char findTheDifference(string s, string t) {
    char c = 0;
    for (char ch : s + t) {
        c ^= ch;
    }
    return c;
}

char findTheDifference(string s, string t) {
    int sums = 0, sumt = 0;
    for (char c : s)
        sums += (int) c;
    for (char c : t)
        sumt += (int) c;
    return (char) (sumt - sums);
}