#include <iostream>
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
    vector<int> text;
    for(int i=1;i<11;++i){
        text.push_back(i);
    }
    check_and_print(text);
    for(auto it=text.begin();it!=text.end();++it)
        *it *= 2 **it;
    check_and_print(text);
    return 0;
}