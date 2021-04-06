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

vector<int> getNoZeroIntegersI(int n) {
    int a=0, b=0, step=1;

    while (n>0) {
        int d = n % 10; // digit
        n /= 10;

        if ((d == 0 || d == 1) && n>0) { // n>0 evades the case when 1 is the most significant digit
            a += step*(1+d);
            b += step*9;
            n--; // handle carry
        } else {
            a += step*1;
            b += step*(d-1);
        }
        step *= 10;
    }

    return {a,b};
}