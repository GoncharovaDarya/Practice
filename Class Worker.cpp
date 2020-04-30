// Class Worker.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cstring>
#include<fstream>

using namespace std;

class Worker
{
    string surname;
    int experience, salaryh, hours, salary;
    double premy;
public:
    void setWorker(string sn, int exp, int sh, int h)
    {
        surname = sn;
        experience = exp;
        salaryh = sh;
        hours = h;
        double p;
        int s;
        s = sh * h;
        salary = s;
        if (exp < 1) p = 0;
        else
        {
            if (exp >= 1 && exp < 3) p = 0.05 * s;
            else
            {
                if (exp >= 3 && exp < 5) p = 0.08 * s;
                else
                {
                    if (exp >= 5) p = 0.15 * s;
                }
            }
        }
        premy = p;
    }
    void getWorker()
    {
        setlocale(LC_ALL, "rus");
        cout << surname << endl << "Стаж работы - " << experience << endl << "Часовая заработная плата -  " << salaryh << endl << surname << " отработал(а) " << hours << " часов" << endl << "Заработная плата - " << salary << endl << "Премия -  " << premy << endl;
        cout << "Информация о " << surname << " записана в файле 'Workers.txt'" << endl;
        ofstream file;
        file.open("Workers.txt", ios_base::app);
        file << surname << endl << "Стаж работы - " << experience << endl << "Часовая заработная плата - " << salaryh << endl << surname << " отработал(а) " << hours << " часов" << endl << "Заработная плата - " << salary << endl << "Премия -  " << premy << endl << endl << endl;
        file.close();
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    string surname;
    int experience, salaryh, hours, salary, premy;
    cout << "Введите фамилию работника: "; cin >> surname; cout << endl;
    cout << "Введите стаж работника: "; cin >> experience; cout << endl;
    cout << "Введите часовую заработную плату работника: "; cin >> salaryh; cout << endl;
    cout << "Введите количество отработанных работником часов: "; cin >> hours; cout << endl;
    Worker objWorker;
    objWorker.setWorker(surname, experience, salaryh, hours);
    objWorker.getWorker();
    system("pause");
    return 0;
}