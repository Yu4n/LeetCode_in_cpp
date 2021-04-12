//
// Created by Yu4n on 2021-04-12.
//

bool rotateString(string A, string B) {
    if (A.size() != B.size()) return false;
    if (A == B) return true;
    int n = A.size();
    for (int i = 0; i < n - 1; ++i) {
        A.push_back(A[i]);
        if (A.substr(i + 1, n) == B) {
            return true;
        }
    }
    return false;
}

bool rotateString(string A, string B) {
    return (A.length() == B.length()) && ((A + A).find(B) != string::npos);

}
