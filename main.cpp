#include <iostream>
#include <vector>
#include "longest_common_subsequence.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    string s1 = "abdsf233cd", s2 = "abs223d";
    cout << longestCommonSubsequence(s1, s2) << endl;
}