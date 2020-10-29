#include <iostream>
#include "twoSum.h"
using namespace std;
int main() {
    vector<int> nums = {7, 7, 2, 3, 4, 9};
    vector<int> res = twoSum(nums, 9);
    for(auto a: res){
        cout << a << " ";
    }
    return 0;
}
