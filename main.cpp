#include <iostream>
#include <string>
#include <cmath>
#include "prime.h"
void rangeTestS(int max) {
    if (max <= 0) {
        int i = 0;
        //lol get rekt pc
        while (true) {
            i++;
            if (prime::isPrimeS(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
    } else {
        for (int i = 0; i < max; i++) {
            if (prime::isPrimeS(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
    }
}

void rangeTest(int max) {
    if (max <= 0) {
        int i = 0;
        //lol get rekt pc
        while (true) {
            i++;
            if (prime::isPrime(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
    } else {
        for (int i = 0; i < max; i++) {
            if (prime::isPrime(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
    }
}
int main() {
    int num;
    std::cout << "Input: ";
    std::cin >> num;
    if (!std::cin.good()) {
        std::cout << "invalid input\n";
        return -1;
    }
    if (prime::isPrime(num)) {
        std::cout << "yes\n";
    } else {
        std::cout << "no\n";
    }
    rangeTest(100);
    rangeTestS(100);
    return 0;
}
