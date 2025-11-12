#include "functions.h"
#include <clocale>


int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    do {
        cout << "\n--------------- МЕНЮ ----------------\n";
        cout << "1. Запустить первую группу задач (TASK 1)\n";
        cout << "2. Запустить вторую группу задач (TASK 2)\n";
        cout << "3. Запустить третью группу задач (TASK 3)\n";
        cout << "4. Завершить программу\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            // TASK 1
            double x = 0.0;
            int number = 0;
            char ch = '\0';
            int num1 = 0, num2 = 0;

            cout << "Введите дробное число для извлечения дробной части: ";
            cin >> x;
            cout << "Дробная часть числа: " << function(x) << endl;

            cout << "Введите целое число для подсчета суммы двух последних цифр: ";
            cin >> number;
            cout << "Сумма двух последних цифр: " << sumLustNums(number) << endl;

            cout << "Введите символ для перевода в число: ";
            cin >> ch;
            cout << "Перевод символа в число: " << charToNum(ch) << endl;

            cout << "Введите число для проверки на положительность: ";
            cin >> number;
            cout << "Число положительное? " << boolalpha << isPositive(number) << endl;

            cout << "Введите число для проверки, является ли оно двузначным: ";
            cin >> number;
            cout << "Число двузначное? " << boolalpha << is2Digits(number) << endl;

            cout << "Введите символ для проверки на заглавность: ";
            cin >> ch;
            cout << "Символ заглавный? " << boolalpha << isUpperCase(ch) << endl;

            cout << "Введите два числа и число для проверки попадания в диапазон: ";
            cin >> num1 >> num2 >> number;
            cout << "Число попадает в диапазон [" << num1 << ", " << num2 << "]? "
                << boolalpha << isInRange(num1, num2, number) << endl;

            cout << "Введите два числа для проверки делимости друг друга: ";
            cin >> num1 >> num2;
            cout << "Один из чисел делится нацело на другой? " << boolalpha << isDivisor(num1, num2) << endl;

            cout << "Введите три числа для проверки равенства: ";
            cin >> num1 >> num2 >> number;
            cout << "Все три числа равны? " << boolalpha << isEqual(num1, num2, number) << endl;

            cout << "Введите два числа для подсчета суммы последних цифр: ";
            cin >> num1 >> num2;
            cout << "Сумма последних цифр: " << lastNumSum(num1, num2) << endl;
            break;
        }

        case 2: {
            // TASK 2
            int x = 0;
            int num1 = 0, num2 = 0, num3 = 0;

            cout << "Введите отрицательное число для вычисления модуля: ";
            cin >> x;
            cout << "Модуль числа: " << myAbs(x) << endl;

            cout << "Введите два числа для безопасного деления: ";
            cin >> num1 >> num2;
            cout << "Результат безопасного деления: " << safeDiv(num1, num2) << endl;

            cout << "Введите число для проверки кратности 3 или 5: ";
            cin >> x;
            cout << "Число кратно 3 или 5? " << boolalpha << is35(x) << endl;

            cout << "Введите два числа для сравнения: ";
            cin >> num1 >> num2;
            cout << "Сравнение чисел: " << makeDecision(num1, num2) << endl;

            cout << "Введите три числа для поиска максимума: ";
            cin >> num1 >> num2 >> num3;
            cout << "Максимальное число: " << max3(num1, num2, num3) << endl;

            cout << "Введите три числа для проверки условий суммирования: ";
            cin >> num1 >> num2 >> num3;
            cout << "Проверка условий суммирования: " << boolalpha << sum3(num1, num2, num3) << endl;

            cout << "Введите два числа для суммирования: ";
            cin >> num1 >> num2;
            cout << "Сумма чисел: " << sum2(num1, num2) << endl;

            cout << "Введите ваш возраст: ";
            cin >> x;
            cout << "Возраст: " << age(x) << endl;

            cout << "Введите номер дня недели (1-7): ";
            cin >> x;
            cout << "Название дня недели: " << day(x) << endl;
            break;
        }

        case 3: {
            // TASK 3
            int x = 0;
            int num1 = 0, num2 = 0;

            cout << "Введите число для вывода убывающего списка чисел: ";
            cin >> x;
            cout << "Список чисел: " << listNums(x) << endl;

            cout << "Введите число для вывода возрастающего списка чисел: ";
            cin >> x;
            cout << "Обратный список чисел: " << reverseListNums(x) << endl;

            cout << "Введите число для вывода чётных чисел: ";
            cin >> x;
            cout << "Чётные числа: " << chet(x) << endl;

            cout << "Введите основание степени и показатель: ";
            cin >> num1 >> num2;
            cout << "Результат возведения в степень: " << pow(num1, num2) << endl;

            cout << "Введите длинное число для подсчета длины последнего разряда: ";
            cin >> x;
            cout << "Длина последнего разряда: " << numLen(x) << endl;

            cout << "Введите число для проверки одинаковости цифр: ";
            cin >> x;
            cout << "Цифры одинаковые? " << boolalpha << equalNum(x) << endl;

            cout << "Введите размер стороны квадрата (*): ";
            cin >> x;
            square(x);

            cout << "Введите высоту левого треугольника (*): ";
            cin >> x;
            leftTriangle(x);

            cout << "Введите высоту правого треугольника (*): ";
            cin >> x;
            rightTriangle(x);

            guessGame();
            break;
        }

        case 4:
            cout << "Работа программы завершена. До встречи!\n";
            break;

        default:
            cout << "Неверный выбор. Повторите попытку.\n";
        }
    } while (choice != 4);

    return 0;
}
