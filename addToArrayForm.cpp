//
// Created by Yu4n on 2021-03-22.
//

vector<int> addToArrayForm(vector<int> &A, int K)
{
    vector<int> res;
    for(int i = A.size() - 1; i >= 0 || K > 0; --i){ // or condition
        if(i >= 0){ // add if A[i] is valid
            K = K + A[i];
        }
        res.push_back(K % 10);
        K /= 10;
    }
    std::reverse(res.begin(), res.end());
    return res;
}