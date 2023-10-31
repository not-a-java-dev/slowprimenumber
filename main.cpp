#include <stdio.h>


bool isPrime(int x) {
    for (int i = 2; i <= x-1; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    //change ya number
    int num = 5;
    if (isPrime(num)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}