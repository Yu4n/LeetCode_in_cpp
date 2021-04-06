//
// Created by Yu4n on 2020-12-07.
//

#ifndef LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
#define LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
// RL
int balancedStringSplit(string s) {
    int cntr=0,res=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]=='R')
            cntr++;
        else
            cntr--;
        if(cntr==0)
            res++;
    }
    return res;
}
#endif //LEETCODE_IN_CPP_BALANCEDSTRINGSPLIT_H
