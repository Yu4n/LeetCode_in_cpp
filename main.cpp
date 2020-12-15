#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

void swap(int *&a, int *&b){
    int *c = a;
    a = b;
    b = c;
}

int main () {
    int a = 12, b = 21;
    int *p = &a, *q = &b;
    swap(p,q);
    cout << *p << ", " << *q;
    return 0;
}