#include <iostream>
#include <string>
bool isPrime(int n) {
    // i hate my life
    for (int i = 2; i <= n-1; i++) {
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
        //kms
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