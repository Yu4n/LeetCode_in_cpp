#include <iostream>
#include <vector>
#include "findDuplicates.h"
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <class T> void check_and_print(T &vec){
    cout << "Size: " << vec.size() << "\nContent: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << (it != vec.end() - 1 ? "," : "");
    cout << "]\n";
}
int main()
{
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> res;
    res = findDuplicates(nums);
    check_and_print(res);
    return 0;
}