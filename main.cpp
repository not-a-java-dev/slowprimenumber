#include <stdio.h>
#include <iostream>
#include <string>
bool isPrime(int x) {
    if (x < 0 || x == 1) {
        return false;
    }
    for (int i = 1; i <= x-1; i++) {
        return !(x % i == 0); 
    }
    return true;
}
void rangeTest(int max) {
    if (max == 0) {
        int i = 0;
        //lol get rekt pc
        while (true) {
            i++;
            if (isPrime(i)) {
                std::cout << std::to_string(i) << " is prime!\n";
            }
        }
        
        return;
    }
    for (int i = 0; i < max; i++) {
        if (isPrime(i)) {
            std::cout << std::to_string(i) << " is prime!\n";
        }
    }
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