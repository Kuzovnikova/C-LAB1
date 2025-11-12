#include "functions.h"


int main() {
    setlocale(LC_ALL, "rus");

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

