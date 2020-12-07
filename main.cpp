#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
#include "balancedStringSplit.h"
#include "check&print.h"

int main () {
    string s = "ewfewf";
    check_and_print(s);
    int i = balancedStringSplit(s);
    return 0;
}