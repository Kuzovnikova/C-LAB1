#include <iostream>

double function(double x) {
    return x - int(x);
}

int sumLustNums(int x) {
    return (x / 10 % 10) + (x % 10);
}

int charToNum(char x) {
    return(int(x) - 48);
}

bool isPositive(int x) {
    return x > 0;
}

bool is2Digits(int x) {
    return x/100 == 0 && x/10 != 0;
}

bool isUpperCase(char x) {
    return x >= 'A' && x <= 'Z';
}

bool isInRange(int a, int b, int num) {
    return a <= num && b >= num || b <= num && a >= num;
}

bool isDivisor(int a, int b) {
    return a % b == 0 || b % a == 0;
}

bool isEqual(int a, int b, int c) {
    return a == b && b == c;
}

int lastNumSum(int a, int b) {
    return (a + b) % 10;
}

int main()
{
    std::cout << function(5.25) << "\r\n";
    std::cout << sumLustNums(4568) << "\r\n";
    std::cout << charToNum('9') << "\r\n";
    std::cout << isPositive(-5) << "\r\n";
    std::cout << is2Digits(3) << "\r\n";
    std::cout << isUpperCase('g') << "\r\n";
    std::cout << isInRange(-10,-1,5) << "\r\n";
    std::cout << isDivisor(5,10) << "\r\n";
    std::cout << isEqual(5,1,5) << "\r\n";
    std::cout << lastNumSum(5,11) << "\r\n";
}