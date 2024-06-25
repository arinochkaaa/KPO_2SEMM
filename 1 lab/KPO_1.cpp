#include <iostream>
#include <chrono>
#include "leap.h"

using namespace std;
extern int arr[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int count(int d, int m, int y)
{
    int count = d;
    arr[1] = (leap(y)) ? 29 : 28;
    for (int i = 0; i < m - 1; i++)
    {
        count += arr[i];
    }
    return count;
}

int birthday(int d, int m, int y, int mybd, int mybm)
{

    int beforeBd = 0;
    if (m > mybm || (m == mybm && d > mybd)) beforeBd = ((leap(y)) ? 366 : 365) - count(d, m, y) + count(mybd, mybm, y + 1);
    else beforeBd = count(mybd, mybm, y) - count(d, m, y);
    return beforeBd;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите дату в формате ДДММГГГГ:";
    int d, m, y, command, mybd, mybm;
    cin >> d >> m >> y;

    if (d > 31 || m > 12) {
        cout << "введена невернаяя дата";
      
    }
    else {
        cout << "что вы хотите сделать? \n 1- определить, является ли год високосным \n 2- посчитать порядковый номер дня в году\n 3-определить количество дней до ближайшего дня рождения \n";
        cin >> command;

        if (command == 1) {
            if (leap(y)) cout << " Этот год является високосным" << endl;
            else cout << " Этот год не является високосным" << endl;
        }
        else if (command == 2) {
            cout << " Порядковый номер дня года = " << count(d, m, y) << endl;
        }
        else if (command == 3) {
            cout << "введите дату своего дня рождения в формате ДДММГГГГ:";
            cin >> mybd >> mybm;
            cout << " Дней до вашего ближайшего дня рождения осталось " << birthday(d, m, y, mybd, mybm) << endl;
        }
    }
    
       
            

      
    

    return 0;
}

