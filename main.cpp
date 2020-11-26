#include <iostream>
#include "reverse_integer.h"
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <class T> void check_and_print(T &vec){
    cout << "size: " << vec.size() << "  content: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << (it != vec.end() - 1 ? "," : "");
    cout << "]\n" << endl;
}

int main()
{
    int a = 964632435;
    cout << reverse(a);
    return 0;
}