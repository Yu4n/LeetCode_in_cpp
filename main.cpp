#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

string::size_type findChar(string &s, char c, string::size_type & occurs){
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i){
        if (s[i] == c){
            if (ret == s.size())
                ret = i;
            occurs++;
        }
    }
    return ret;
}

int main () {
    int i = 9;
    cout << "test", cin >> i, cout << i;
}