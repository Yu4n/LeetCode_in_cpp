#include <iostream>
#include <cstdio>

using namespace std;

int a[10010],b[10010],h[10010],maxx,m=0,i=1,n=0,x;
// 7 300 250 275 252 200 138 245
// 7 181 205 471 782 1033 1058 1111
int main()
{
    int ln;
    cin >> ln;
    for(int p=0;p!=ln;++p) {
        int drop;
        cin >> drop;
        i = 1;
        n = 0;
        m = 0;
        while (cin >> a[i]) {
            maxx = 0;
            for (int j = 1; j <= i - 1; j++) {
                if (a[j] >= a[i])
                    if (b[j] > maxx)
                        maxx = b[j];
            }
            b[i] = maxx + 1;
            if (b[i] > m) m = b[i];
            x = 0;
            for (int k = 1; k <= n; k++)
                if (h[k] >= a[i])
                    if (x == 0) x = k;
                    else if (h[k] < h[x]) x = k;
            if (x == 0) {
                n++;
                x = n;
            }
            h[x] = a[i];
            i++;
            if(i > drop) break;
        }
        cout << m << ' ' << n << endl;
    }
    return 0 ;
}