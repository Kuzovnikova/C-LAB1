#include "functions.h"


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
    cout << isInRange(-10, -1, 5) << "\r\n";
    cout << isDivisor(5, 10) << "\r\n";
    cout << isEqual(5, 1, 5) << "\r\n";
    cout << lastNumSum(5, 11) << "\r\n";

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

    ///////////////TASK 3///////////////
    cout << listNums(5) << "\r\n";
    cout << reverseListNums(5) << "\r\n";
    cout << chet(10) << "\r\n";
    cout << pow(3, 3) << "\r\n";
    cout << numLen(123456789) << "\r\n";
    cout << equalNum(1112) << "\r\n";
    square(5);
    leftTriangle(5);
    rightTriangle(5);
    guessGame();
}