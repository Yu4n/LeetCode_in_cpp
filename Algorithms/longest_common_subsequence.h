//
// Created by Yu4n on 2020-11-12.
//

#ifndef LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H
#define LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H
// https://leetcode.com/problems/longest-common-subsequence/discuss/348884/C%2B%2B-with-picture-O(nm)
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size(), n = text2.size();
    if(m < n) return longestCommonSubsequence(text2, text1);
    vector<vector<int>> memo(n + 1, vector<int>(m+1));
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (text2[i-1] == text1[j-1]){
                memo[i][j] = memo[i-1][j-1] + 1;
            }
            else{
                memo[i][j] = std::max(memo[i-1][j],memo[i][j-1]);
            }
        }
    }
    return memo[n][m];
}

#endif //LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H
