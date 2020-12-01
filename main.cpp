#include <iostream>
#include <vector>
#include "findDuplicates.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> res;
    res = findDisappearedNumbers(nums);
    for(auto x:res){
        cout << x << ' ';
    }
    return 0;
}