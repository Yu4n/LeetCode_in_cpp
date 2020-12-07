#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
#include "balancedStringSplit.h"

int main () {
    string s = "RLRRLLRLRL";
    cout << balancedStringSplit(s);
    return 0;
}