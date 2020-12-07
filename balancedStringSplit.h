//
// Created by Yu4n on 2020-12-07.
//

#ifndef LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
#define LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
// RL
int balancedStringSplit(string s){
    int r_num = 0, l_num = 0, cnt = 0;
    for (string::iterator it = s.begin(); it != s.end(); ++it){
        if (*it == 'L'){
            l_num++;
        } else{
            r_num++;
        }
        if (l_num == r_num){
            cnt++;
            l_num = r_num = 0;
        }
    }
    return cnt;
}
#endif //LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
