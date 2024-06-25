// lab_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits>
#include <cmath>

// Функция, которую мы будем вызывать через указатель
void myFunction(int x) 
{
    std::cout << "Вызвана функция с аргументом: " << x << std::endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n = 11;
    int X = 9 + n;
    int Y = 10 + n;
    int Z = 11 + n;
    float S = 1.0 + (float)n;
    bool bl1 = false, bl2 = true;
    char symb1 = 'o';
    char symb2 = 'о';
    wchar_t wsymb1 = 'v';
    wchar_t wsymb2 = 'в';
    short int shx1 = X;
    short int shx2 = -X;
    short int sh1 = 0x7fff;
    short int sh2 = 0x8000;
    unsigned short int usx1 = 0xffff;
    unsigned short int usx2 = 0x0000;
    int iy1 = Y;
    int iy2 = -Y;
    int he1 = 0x7FFFFFFF;
    int he2 = 0x80000000;
    unsigned int hey1 = 0xFFFFFFFF;
    unsigned int hey2 = 0x00000000;
    long int z1 = Z;
    long int z2 = -Z;
    long long int lgz1 = 0x7fffffffffffffffll;
    long long int lgz2 = 0x8000000000000000ll; // 80 00 00 00 00 00 00 00
    unsigned long long int lguz1 = 0xffffffffffffffffll;
    unsigned long long int lguz2 = 0x0000000000000000ll; // 80 00 00 00 00 00 00 00
    int size = sizeof(long int);
    float s1 = S;
    float s2 = -S;
    
    // Получение значения положительной бесконечности
    float positive_infinity = std::numeric_limits<float>::infinity();
    std::cout << "1.#INF: " << positive_infinity << std::endl;

    // Получение значения отрицательной бесконечности
    float negative_infinity = -std::numeric_limits<float>::infinity();
    std::cout << "-1.#INF: " << negative_infinity << std::endl;

    // Получение значения неопределенности (NaN)
    float indeterminate = std::numeric_limits<float>::quiet_NaN();
    std::cout << "-1.#IND: " << indeterminate << std::endl;


    double double_var = 101112.0;
    // Создаем указатели и инициализируем их

    char* char_ptr = &symb1;
    wchar_t* wchar_ptr = &wsymb1;
    short* short_ptr = &shx1;
    int* int_ptr = &he1;
    float* float_ptr = &S;
    double* double_ptr = &double_var;

    // Увеличиваем значения указателей на 3
    char_ptr += 3;
    wchar_ptr += 3;
    short_ptr += 3;
    int_ptr += 3;
    float_ptr += 3;
    double_ptr += 3;

    // Объявляем указатель на функцию, совместимый с типом функции myFunction
    void (*funcPtr)(int) = myFunction;

    // Вызываем функцию через указатель
    funcPtr(42);
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
