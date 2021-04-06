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

bool isHappyHashMap(int n){
    std::unordered_map<int, bool> m;
    while (n != 1){
        if (m[n] == 0){
            m[n] = 1;
        } else{
            return false;
        }
        n = digitSquareSum(n);
    }
    return true;
}

bool isHappyBrent(int n) {
    int slow = n, fast = digitSquareSum(n);
    int cnt = 1, lim = 2;
    while(slow != fast){
        if(cnt == lim){
            cnt = 1;
            lim = lim*2;
            slow = fast;
        }
        else
            cnt ++;
        fast = digitSquareSum(fast);
    }
    return fast == 1 ;
}