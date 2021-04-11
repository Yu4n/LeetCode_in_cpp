//
// Created by Yu4n on 2021-04-11.
//

bool hasAlternatingBits(int n) {
    while (n) {
        int cur = n % 2;
        n >>= 1;
        if (cur == n % 2){
            return false;
        }
    }
    return true;
}