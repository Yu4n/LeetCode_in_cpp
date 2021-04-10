//
// Created by Yu4n on 2021-04-10.
//

int titleToNumber(string columnTitle) {
    int sum = 0;
    for (int i = columnTitle.size() - 1, e = 0; i >= 0; --i, ++e) {
        sum += pow(26,e)*(columnTitle[i]-64);
    }
    return sum;
}