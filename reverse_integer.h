//
// Created by Yu4n on 2020-11-26.
//

#ifndef LEETCODE_IN_CPP_REVERSE_INTEGER_H
#define LEETCODE_IN_CPP_REVERSE_INTEGER_H
#include <cmath>
int reverse(int x){
    int rev = 0;
    int y = x>0?x:-x; //negation of -2147483648 cannot be represented in type 'int';
    // cast to an unsigned type to negate this value to itself
    if(pow(2,31)-1<x || x < -pow(2,31))
        return 0;
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