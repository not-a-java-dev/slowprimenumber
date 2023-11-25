#include <iostream>
#include <string>
#include <cmath>
bool isPrime(int n) {
    if (n <= 1) {
       return false;
    }
    if (n == 2) {
       return true;
    }
    if (n % 2 == 0) {
       return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void rangeTest(int max) {
    if (max <= 0) {
        int i = 0;
        //lol get rekt pc
        while (true) {
            i++;
            if (isPrime(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
    } else {
        for (int i = 0; i < max; i++) {
            if (isPrime(i)) {
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
    if (isPrime(num)) {
        std::cout << "yes\n";
    } else {
        std::cout << "no\n";
    }
    rangeTest(100);
    return 0;
}
