//
// Created by Yu4n on 2021-03-27.
//

int lengthOfLastWord(string s) {
    int n = s.size();
    while (n != 0 && s[n - 1] == ' ') n--;
    if(n == 0)
        return 0;
    else {
        for (int i = n - 1; i >= 0; --i)
            if (s[i] == ' ')
                return n - 1 - i;
    }
    return n;
}