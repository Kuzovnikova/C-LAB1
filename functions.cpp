#include "functions.h"

///////////////TASK 1///////////////
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
    return x / 100 == 0 && x / 10 != 0;
}


///////////////TASK 2///////////////
int myAbs(int x) {
    if (x < 0)
        return -x;
    else
        return x;
}

double safeDiv(int x, int y) {
    if (y == 0)
        return y;
    else
        return double(x) / y;
}

bool is35(int x) {
    if (x % 3 == 0 || x % 5 == 0) {
        if (x % 3 == 0 && x % 5 == 0)
            return false;
        return true;
    }
    else
        return false;
}

string makeDecision(int x, int y) {
    if (x != y) {
        if (x > y)
            return to_string(x) + " > " + to_string(y);
        else
            return to_string(x) + " < " + to_string(y);
    }
    else
        return to_string(x) + " = " + to_string(y);
}

int max3(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    }
    else if (y >= x && y >= z) {
        return y;
    }
    else
        return z;
}


///////////////TASK 3///////////////
string listNums(int x) {
    string str = "";
    for (x; x >= 0; x--) {
        str.insert(0, " ");
        str.insert(0, to_string(x));
    }
    return str;
}

string reverseListNums(int x) {
    string str = "";
    for (int i = 0; i <= x; i++) {
        str.insert(0, " ");
        str.insert(0, to_string(i));
    }
    return str;
}

string chet(int x) {
    string str = "";
    for (int i = 0; i <= x; i+=2) {
        str.insert(i, " ");
        str.insert(i, to_string(i));
    }
    return str;
}

int pow(int x, int y) {
    int res = 1;
    for (y; y > 0; y--) {
        res *= x;
    }
    return res;
}   

int numLen(long x) {
    while (x > 10) {
        x %= 10;
    }
    return x;
}


