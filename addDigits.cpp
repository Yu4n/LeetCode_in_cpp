//
// Created by Yu4n on 2021-04-03.
//

int digitalRoot(int num) {
    if (num == 0) return 0;
    if (num % 9 == 0) return 9;
    return num % 9;
}

int addDigits(int num) {
    int root = 0;
    while (num > 0){
        root += num % 10;
        num /= 10;
        if(num == 0 && root > 9){
            num = root;
            root = 0;
        }
    }
    return root;
}