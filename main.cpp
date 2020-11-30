#include <iostream>
#include <vector>
#include "find_disappeared_numbers.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> nums{6,4,3,7,8};
    vector<int> res;
    res = findDisappearedNumbers(nums);
    for(auto x:res){
        cout << x << ' ';
    }
    return 0;
}