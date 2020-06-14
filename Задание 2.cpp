// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// avg_function.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
using namespace std;

#include <ctime> // прототип функции time()
double avg(const int* arrayPtr, int size_array);// прототип функции нахождения среднего арифметического

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    srand(time(0)); // рандомизация
    const int length_array = 10; // размер массива
    int vector[length_array]; // объявляе массив соответствующего размера

    for (int counter = 0; counter < length_array; counter++)
    {
        vector[counter] = rand() % 100; // инициализация массива случайным числом в интервале [0;99]
        cout << vector[counter] << " "; // печать элемента массива
    }
    cout << "\nсреднее арифметическое = " << avg(vector, length_array) << endl; // запуск функции
    system("pause");
    return 0;
}

double avg(const int* arrayPtr, int size_array) // функция нахождения среднего арифметического
{
    int sum = 0; // хранение суммы элементов массива
    for (int counter = 0; counter < size_array; counter++)
    {
        sum += arrayPtr[counter]; // накапливаем сумму
    }

    return (double)sum / size_array; // возвращаем среднее арифметическое
}