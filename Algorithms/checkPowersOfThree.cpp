//
// Created by Yu4n on 2021-04-11.
//

bool checkPowersOfThree(int n) {
    int i, tmp;
    while (n) {
        i = 0;
        while (true) {
            tmp = pow(3, i);
            if (tmp * 3 > n) {
                if ((n - tmp) >= tmp) {
                    return false;
                } else {
                    break;
                }
            } else {
                i++;
            }
        }
        n -= tmp;
    }
    return n == 0;
}