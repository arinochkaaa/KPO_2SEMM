// lab_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <tchar.h>

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
    day dd;
    month mm;
    year yyyy;
};

// Перегрузка оператора '<' для структуры Date
bool operator<(const Date& lhs, const Date& rhs) {
    if (lhs.yyyy != rhs.yyyy)
        return lhs.yyyy < rhs.yyyy;
    if (lhs.mm != rhs.mm)
        return lhs.mm < rhs.mm;
    return lhs.dd < rhs.dd;
}

// Перегрузка оператора '==' для структуры Date
bool operator==(const Date& lhs, const Date& rhs) {
    if (lhs.yyyy != rhs.yyyy)
        return 0;
    if (lhs.mm != rhs.mm)
        return 0;
    return lhs.dd == rhs.dd;
}

// Перегрузка оператора '>' для структуры Date
bool operator>(const Date& lhs, const Date& rhs) {
    if (lhs.yyyy != rhs.yyyy)
        return lhs.yyyy > rhs.yyyy;
    if (lhs.mm != rhs.mm)
        return lhs.mm > rhs.mm;
    return lhs.dd > rhs.dd;
}

int _tmain(int arg, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");

    Date date1 = { 7, 1, 1980 };
    Date date2 = { 7, 2, 1993 };
    Date date3 = { 7, 1, 1980 };

    if (date1 < date2) std::cout << "истина\n";
    else std::cout << "ложь\n";

    if (date1 > date2) std::cout << "истина\n";
    else std::cout << "ложь\n";

    if (date1 == date2) std::cout << "истина\n";
    else std::cout << "ложь\n";

    if (date1 == date3) std::cout << "истина\n";
    else std::cout << "ложь\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
