//
// Created by Yu4n on 2020-11-26.
//

#ifndef LEETCODE_IN_CPP_REVERSE_INTEGER_H
#define LEETCODE_IN_CPP_REVERSE_INTEGER_H
int reverse(int x){
    if(pow(2,31)-1<x || x < -pow(2,31))
        return 0;
    long rev = 0;
    int y = abs(x);
    while (y != 0){
        int pop = y % 10;
        y = y/10;
        rev = rev * 10 + pop;
    }
    if(pow(2,31)-1<rev || rev < -pow(2,31)){
        return 0;
    }
    if(x<0)
        return -rev;
    else
        return rev;
}

#endif //LEETCODE_IN_CPP_REVERSE_INTEGER_H