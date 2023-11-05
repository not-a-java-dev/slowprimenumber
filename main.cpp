#include <stdio.h>
#include <iostream>
#include <string>
bool isPrime(int x) {
    // i hate my life
    for (int i = 2; i <= x-1; i++) {
        if (x % i == 0) {
            return false;
        } 
    }
    return true;
}
void rangeTest(int max, int printFrom) {
    if (max == 0) {
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
        printf("invalid input");
        //kms
        return -1;
    }
    if (isPrime(num)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    rangeTest(0,1000000);
    return 0;
}