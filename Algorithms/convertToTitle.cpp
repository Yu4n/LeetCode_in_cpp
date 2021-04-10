//
// Created by Yu4n on 2021-04-10.
//

string convertToTitle(int target) {
    int tmp;
    string res;
    while (target) {
        target -= 1;
        tmp = target % 26;
        target = target / 26;
        res.push_back(tmp + 65);
    }
    std::reverse(res.begin(), res.end());
    return res;
}