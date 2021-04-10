//
// Created by Yu4n on 2021-04-10.
//

string convertToTitle(int target) {
    int tmp;
    string res;
    while (target > 0) {
        tmp = target % 26;
        target = target / 26;
        if(tmp == 0){
            tmp = 26;
            target -= 1;
        }
        res.push_back(char(tmp + 64));
    }
    std::reverse(res.begin(), res.end());
    return res;
}