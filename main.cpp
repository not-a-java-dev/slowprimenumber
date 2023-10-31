#include <stdio.h>
#include <iostream>

bool isPrime(int x) {
    for (int i = 2; i <= x-1; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    std::cout << "Input: ";
    std::cin >> num;
    if (!std::cin.good()) {
        printf("invalid input");
        return 0;
    }
    if (isPrime(num)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}