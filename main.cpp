#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

template <class T> void check_and_print(T &vec){
    cout << "size: " << vec.size() << " content: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << (it != vec.end() - 1 ? "," : "");
    cout << "]\n" << endl;
}

int main()
{
    int n;
    cin >> n;
    string str;
    std::getline(cin, str);
    for(int i = 0; i != n; ++i){
        int cnt = 0;
        //string str;
        std::getline(cin, str);
        for(const auto x:str){
            if(isdigit(x))
                cnt += 1;
        }
        cout << cnt << endl;
    }
}