//
// Created by Yu4n on 2020-11-14.
//

#ifndef LEETCODE_IN_CPP_VALID_PARENTHESES_H
#define LEETCODE_IN_CPP_VALID_PARENTHESES_H
#include <stack>
#include <string>
using std::string;
using std::stack;

bool isValid(string s) {
    // string str = std::move(s);
    stack<char> ch;
    for(auto x : s) {
        if(ch.empty())
            ch.push(x);
        else if(x == ')' && ch.top() == '(')
            ch.pop();
        else if(x == '}' && ch.top() == '{')
            ch.pop();
        else if(x == ']' && ch.top() == '[')
            ch.pop();
        else
            ch.push(x);
    }
    if(ch.empty())
        return true;
    else
        return false;
}
#endif //LEETCODE_IN_CPP_VALID_PARENTHESES_H
