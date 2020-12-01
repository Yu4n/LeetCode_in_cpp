//
// Created by Yu4n on 2020-12-01.
//

#ifndef LEETCODE_IN_CPP_CHECK_PRINT_H
#define LEETCODE_IN_CPP_CHECK_PRINT_H
#include <iostream>
using std::cout;
template <class T> void check_and_print(T &vec){
    cout << "Size: " << vec.size() << "\nContent: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << (it != vec.end() - 1 ? "," : "");
    cout << "]\n";
}
#endif //LEETCODE_IN_CPP_CHECK_PRINT_H
