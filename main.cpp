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
int main(){
    int m;
    int *num;
    int **a;
    cin >> m;
    a = new int *[m];
    num = new int [m];
    for (int i = 0; i < m; ++i) {
        cin >> num[i];
        a[i] = new int[num[i]];
        for(int j = 0; j<num[i]; ++j){
            cin >> a[i][j];
        }
        for (int j = 0; j < num[i] - 1; j++)
        {
            if (a[i][j] > a[i][j + 1])
            {
                swap(a[i][j], a[i][j + 1]);
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < num[i]; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
    //7 3 6 4 7 6 8 2
    // 8 2 7 5 8 4 9 6 3
}