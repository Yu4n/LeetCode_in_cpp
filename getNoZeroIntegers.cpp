//
// Created by Yu4n on 2021-04-04.
//

bool contain0(int n){
    while (n > 9){
        if(n % 10 == 0){
            return true;
        } else{
            n /= 10;
        }
    }
    return n == 0;
}

vector<int> getNoZeroIntegers(int n) {
    int i;
    for ( i = 1; i < n; ++i) {
        if (contain0(n - i) || contain0(i)){
            continue;
        } else {
            break;
        }
    }
    return {i,n-i};
}