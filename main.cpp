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
    for(int i = 0; i != n; ++i){
        int j;
        cin >> j;
        int fst, sec;
        cin >> fst >> sec;
        for(int a = 0; a != j - 2; ++a){
            int num;
            while (cin >> num){
                if (num < fst){
                    sec = fst;
                    fst = num;
                } else if (num > fst && num < sec)
                    sec = num;
            }
        }
        cout << sec << endl;
    }
}