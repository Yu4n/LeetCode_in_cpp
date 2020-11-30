#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
template <class T> void swap ( T& a, T& b )
{
    T c(a); a=b; b=c;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i != n; ++i){
        int j;
        cin >> j;
        int num;
        vector<int> nums;
        for(int a = 0; a != j; ++a){
            cin >> num;
            nums.push_back(num);
        }
        for(int k = 0; k != nums.size() - 1; ++k){
            if(nums[k] > nums[k+1])
                swap(nums[k],nums[k+1]);
        }
        for(int & num : nums){
            cout << num << ' '; //(it != nums.end() - 1 ? " " : "");
        }
        nums.clear();
        // 7 3 6 4 7 6 8 2
        // 8 2 7 5 8 4 9 6 3
    }
}