//
// Created by Yu4n on 2020-12-07.
//

#ifndef LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
#define LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
// RL
int balancedStringSplit(string s){
    int cnt = 0, rpt = 0;
    for (string::iterator it = s.begin(); it != s.end();){
        if (*it == *(it+1)){
            rpt = rpt + 1;
            it = it + 1;
        } else {
            s.erase(0, (rpt+1)*2);
            rpt = 0;
            cnt = cnt + 1;
            it = s.begin();
        }
    }
    return cnt;
}
#endif //LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
