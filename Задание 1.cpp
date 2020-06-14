// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream> 
#include <string> 
using namespace std;
int main(int argc, char* argv) {
		setlocale(LC_ALL, "rus");
		int j = 0;
		string num;

		cout << "Введите число: "; cin >> num;

		cout << "Сколько разрядов показать? "; cin >> j;

		for (int i = 0; i < j; i++)
			cout << num[i];

		cout << endl;
		system("pause");
		return 0;
	}