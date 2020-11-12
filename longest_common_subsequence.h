//
// Created by Yu4n on 2020-11-12.
//
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::max;

#ifndef LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H
#define LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H

int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size(), n = text2.size();
    if(m < n) return longestCommonSubsequence(text2, text1);
    vector<vector<int>> memo(2, vector<int>(n + 1));
    for(int i = 1; i < m + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(text1[i-1] == text2[j-1]){
                memo[i % 2][j] = 1 + memo[(i - 1) % 2][j - 1];
            }
            else
                memo[i % 2][j] = max(memo[(i - 1) % 2][j], memo[i % 2][j - 1]);
        }
    }
    return memo[m % 2][n];
}

#endif //LEETCODE_IN_CPP_LONGEST_COMMON_SUBSEQUENCE_H
