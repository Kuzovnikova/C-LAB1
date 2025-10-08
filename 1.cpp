#include <iostream>
#include <string>

using namespace std;


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

bool sum3(int x, int y, int z) {
    if (x + y == z || x + z == y || y + z == x) {
        return true;
    }
    else
        return false;
}

int sum2(int x, int y) {
    if (10 <= (x + y) && (x + y) <= 19)
        return 20;
    else
        return x + y;
}

string age(int x) {
    if (x % 10 == 1 && x != 11)
        return to_string(x) + " год";
    else if ((x % 10 == 2 || x % 10 == 3 || x % 10 == 4) &&
        x != 12 && x != 13 && x != 14)
        return to_string(x) + " года";
    else 
        return to_string(x) + " лет";
}

string day(int x) {
    switch(x)
    {
        case 1:
            return "понедельник";
        
        case 2:
            return "вторник";

        case 3:
            return "среда";

        case 4:
            return "четверг";

        case 5:
            return "пятница";

        case 6:
            return "суббота";

        case 7:
            return "воскресенье";
        
        default:
            return "это не день недели";
    }
}

void printDays(string x) {
    int i = 0;

    if (x == "понедельник")
        i = 1;
    else if (x == "вторник")
        i = 2;
    else if (x == "среда")
        i = 3;
    else if (x == "четверг")
        i = 4;
    else if (x == "пятница")
        i = 5;
    else if (x == "суббота")
        i = 6;
    else if (x == "воскресенье")
        i = 7;

    switch (i)
    {
    case 1:
        cout << "понедельник\n";

    case 2:
        cout << "вторник\n";

    case 3:
        cout << "среда\n";

    case 4:
        cout << "четверг\n";

    case 5:
        cout << "пятница\n";

    case 6:
        cout << "суббота\n";

    case 7:
        cout << "воскресенье\n";
        break;

    default:
        cout << "это не день недели\n";
        break;
    }
}



int main()
{
    setlocale(LC_ALL, "rus");

    ///////////////TASK 1///////////////
    cout << function(5.25) << "\r\n";
    cout << sumLustNums(4568) << "\r\n";
    cout << charToNum('9') << "\r\n";
    cout << isPositive(-5) << "\r\n";
    cout << is2Digits(3) << "\r\n";
    cout << isUpperCase('g') << "\r\n";
    cout << isInRange(-10,-1,5) << "\r\n";
    cout << isDivisor(5,10) << "\r\n";
    cout << isEqual(5,1,5) << "\r\n";
    cout << lastNumSum(5,11) << "\r\n";

    ///////////////TASK 2///////////////
    cout << myAbs(-5) << "\r\n";
    cout << safeDiv(6, 3) << "\r\n";
    cout << is35(15) << "\r\n";
    cout << makeDecision(5, 5) << "\r\n";
    cout << max3(7, 7, 6) << "\r\n";
    cout << sum3(7, 7, 6) << "\r\n";
    cout << sum2(7, 7) << "\r\n";
    cout << age(21) << "\r\n";
    cout << day(8) << "\r\n";
    printDays("среда");

}
