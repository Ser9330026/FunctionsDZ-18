/*Задача 1
Создайте функцию, которая принимает от 1-го до 5-ти
(включительно) разных чисел, после чего возвращает
их сумму. Для решения необходимо использовать
параметры по умолчанию. Учтите, что в функции должен быть один
обязательный параметр.*/

#include <iostream>

int arrSum(int arr[], const int length = 5) {
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += arr[i];
    return sum;
}

int main() {
    setlocale(LC_ALL, "rus");
    const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "Суммы чисел равна: ";
    std::cout << arrSum(arr, SIZE);
}

/*Задача 2
Создайте встраиваемую функцию, которая
принимает три числа и возвращает
их среднее арифметическое.*/

#include <iostream>

inline double sumFunction(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3;
}

int main() {
    setlocale(LC_ALL, "rus");
    int a, b, c;
    std::cout << "Введиет три числа: ";
    std::cin >> a >> b >> c;
    std::cout << sumFunction(a, b, c);
}

/*Задача 3
Создайте перегруженную функцию для нахождения
максимального из трёх переданных в неё значений.
Функция должна поддерживать типы int, short и double.
Также функция должна выводить тип
переданных в неё значений.*/


#include <iostream>

int maxFunction(int num1, int num2, int num3) {
    int max;
    if (num1 > num2 && num1 > num3)
        num1 = max;
    if (num2 > num1 && num2 > num3)
        num2 = max;
    if (num3 > num1 && num3 > num2)
        num3 = max;
    return max;
}

short int maxFunction(short int num1, short int num2, short int num3) {
    int max;
    if (num1 > num2 && num1 > num3)
        num1 = max;
    if (num2 > num1 && num2 > num3)
        num2 = max;
    if (num3 > num1 && num3 > num2)
        num3 = max;
    return max;
}

double maxFunction(double num1, double num2, double num3) {
    int max;
    if (num1 > num2 && num1 > num3)
        num1 = max;
    if (num2 > num1 && num2 > num3)
        num2 = max;
    if (num3 > num1 && num3 > num2)
        num3 = max;
    return max;
}

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << maxFunction(5, 3, 8) << '\n';
    std::cout << maxFunction(5, 3, 1) << '\n';
    std::cout << maxFunction(5.7, 9.8, 8.0) << '\n';
}

/*Задача 4
.
Напишите шаблонную функцию, которая принимает
массив любого типа и его длину типа int.
Функция должна найти первое простое число в массиве
и вернуть его как результат своей работы.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>



template <typename T>
T arrayT(T arr[], const int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] > 1 && arr[i] % 2 != 0 &&
            arr[i] % 3 != 0 && arr[i] % 5 != 0 &&
            arr[i] % 7 != 0 || arr[i] == 2 ||
            arr[i] == 3 || arr[i] == 5 ||
            arr[i] == 7) {
            return arr[i];
            break;
        }
    }
}


int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int a = 0;
    int b = 100;


    const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (b + 1 - a) + a;
        std::cout << arr[i] << '\t';
    }
    std::cout << '\n';
    std::cout << "Первое простое число в массиве: ";
    std::cout << arrayT(arr, SIZE);
}
