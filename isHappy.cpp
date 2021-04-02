//
// Created by Yu4n on 2021-04-01.
//

int digitSquareSum(int n) {
    int sum = 0, tmp;
    while (n) {
        tmp = n % 10;
        sum += tmp * tmp;
        n /= 10;
    }
    return sum;
}

// Cycle detection by fast and slow https://en.wikipedia.org/wiki/Cycle_detection
bool isHappy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = digitSquareSum(slow);
        fast = digitSquareSum(fast);
        fast = digitSquareSum(fast);
        if(fast == 1) return 1;
    } while(slow != fast);
    return 0;
}

bool isHappyHashSet(int n){
    std::unordered_set<int> m;
    while (m.find(n)==m.end()){
        m.insert(n);
        n = digitSquareSum(n);
        if (n == 1){
            return true;
        }
    }
    return false;
}