// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void messege();

int main(int argc, const char* argv[]) {

    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    int size;
    char string[255];
    char switcher;
    cout << "Введите строку: ";
    gets_s(string);
    size = strlen(string);

    for (;;)
    {
        cout << endl << endl << "Ваша исходная строка: " << string;
        messege();
        cout << "\nВведите необходимое действие: ";
        cin >> switcher;
        switch (switcher)
        {
        case '1':

            for (int i = 0; i < size; i++)
                cout << (char)toupper(string[i]);
            break;
        case '2':

            for (int i = 0; i < size; i++)
                cout << (char)tolower(string[i]);
            break;
        case '3':

            cout << (char)toupper(string[0]);
            for (int i = 1; i < size; i++)
            {
                if (string[i] == ' ')
                {
                    cout << string[i];
                    string[i + 1] = (char)toupper(string[i + 1]);
                    cout << string[i + 1];
                    i++;
                }
                else if (string[i] != ' ')
                    cout << string[i];
            }
            break;
        case '4':

            cout << (char)tolower(string[0]);
            for (int i = 1; i < size; i++)
            {
                if (string[i] == ' ')
                {
                    cout << string[i];
                    string[i + 1] = (char)tolower(string[i + 1]);
                    cout << (char)tolower(string[i + 1]);
                    i++;
                }
                else
                    cout << (char)toupper(string[i]);
            }
            break;
        case '5':

            cout << (char)toupper(string[0]);
            for (int i = 1; i < size; i++)
                cout << string[i];
            break;
        }
        if (switcher == 'f' || switcher == 'F')
            break;
    }

    system("pause");
    return 0;
}
void messege() {

    cout << "Для преобразования строки в заглавные буквы нажмите : 1 ";
    cout << "Для преобразования строки в нижний регистр нфжмите : 2 ";
    cout << "Для преобразования строки с Заглавной Буквы нажмите : 3 ";
    cout << "Для преобразования строки в первый символ в нижнем регистре нажмите : 4 ";
    cout << "Для преобразования строки как в обычном предложении нажмите : 5 ";
    cout << "Для выхода нажмите : f ";
}