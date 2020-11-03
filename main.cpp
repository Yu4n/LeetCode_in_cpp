#include <iostream>
#include <array>
#include <vector>
using std::string;using std::cout;using std::cin;using std::endl;
//#include "twoSum.h"
#include "Knapsack_problem.h"

// w1_r represents remaining capacity of 1st knapsack
// w2_r represents remaining capacity of 2nd knapsack
// i represents index of the array arr we are working on

// Driver program
int main()
{
    int W = 8;
    int val[] = {10, 40, 50, 70};
    int wt[] = {1, 3, 4, 1};
    int n = sizeof(val)/sizeof(val[0]);
    cout << unboundedKnapsack(W, n, val, wt) << endl;
    cout << knapsack_0_1(W, wt, val, n) << endl;
    return 0;
}