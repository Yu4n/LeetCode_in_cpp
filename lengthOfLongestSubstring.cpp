//
// Created by Yu4n on 2021-03-09.
//

int lengthOfLongestSubstring(string s) {
    vector<int> dict(256, -1);
    int maxLen = 0, start = -1;
    for (int i = 0; i != s.length(); i++) {
        if (dict[s[i]] > start)
            start = dict[s[i]];
        dict[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    return maxLen;
}

//"dict" is used to keep tracking the char in the input string you read every time. start indicates the position of starting position of the substring. At the beginning, it initializes all value in "dict" to -1. Then in the for loop, it scans every char in the string. If the char in the "dict"'s value is larger than "start", it means it already in the substring. You should change the start position of substring to the repeat position and start a new count. "maxLen" records the maximum length of substring you have so far.

//For example, the input is "aba", you check dict[s[0]], which is dict[97] is -1. Therefore, you can change the dict[97] to 0. In this way, you keep recording the string char's position in the dict. When you meet the second "a" in the input, dict[97] is 0 and larger than start, which is -1. Then you change start value to 0. When you apply length function ( i - start), you calculate the new substring length, which didn't contain the substring before the first "a".