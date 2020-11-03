//
// Created by Yu4n on 2020-11-03.
//

#ifndef LEETCODE_IN_CPP_KNAPSACK_PROBLEM_H
#define LEETCODE_IN_CPP_KNAPSACK_PROBLEM_H
int max(int a, int b) { return (a > b) ? a : b; }

// Returns the maximum value with knapsack of
// W capacity
int unboundedKnapsack(int W, int n, int val[], int wt[]) {
    // dp[i] is going to store maximum value
    // with knapsack capacity i.
    int dp[W + 1];
    for (auto &x: dp) {
        x = 0;
    }

    // Fill dp[] using above recursive formula
    for (int i = 0; i <= W; i++)
        for (int j = 0; j < n; j++)
            if (wt[j] <= i)
                dp[i] = max(dp[i], dp[i - wt[j]] + val[j]);

    return dp[W];
}

int knapsack_0_1(int W, int wt[], int val[], int n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[n - 1] > W)
        return knapsack_0_1(W, wt, val, n - 1);

        // Return the maximum of two cases:
        // (1) nth item included
        // (2) not included
    else
        return max(val[n - 1] + knapsack_0_1(W - wt[n - 1],wt, val, n - 1),
                   knapsack_0_1(W, wt, val, n - 1));
}

#endif //LEETCODE_IN_CPP_KNAPSACK_PROBLEM_H
