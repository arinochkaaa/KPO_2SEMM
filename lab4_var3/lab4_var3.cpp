#include <iostream>

// Псевдонимы типов данных для полей структуры
using SquareMeters = double;
using RoomCount = int;
using YearBuilt = int;
using Floor = int;
using Presence = bool;

namespace std {

    // Структура
    struct ApartmentParams {
        SquareMeters squareMeters;
        RoomCount roomCount;
        YearBuilt yearBuilt;
        Floor floor;
        Presence hasKitchen;
        Presence hasBathroom;
        Presence hasToilet;
        Presence hasBasement;
        Presence hasBalcony;

        // Конструктор для инициализации полей
        ApartmentParams(SquareMeters sqm, RoomCount rooms, YearBuilt year,
            Floor flr, Presence kitchen, Presence bath,
            Presence toilet, Presence basement, Presence balcony)
            : squareMeters(sqm), roomCount(rooms), yearBuilt(year),
            floor(flr), hasKitchen(kitchen), hasBathroom(bath),
            hasToilet(toilet), hasBasement(basement), hasBalcony(balcony) {}

        // Операция для вывода информации о квартире
        void display() const {
            cout << "Параметры квартиры:\n"
                << "Площадь: " << squareMeters << " кв.м\n"
                << "Количество жилых комнат: " << roomCount << "\n"
                << "Год постройки: " << yearBuilt << "\n"
                << "Этаж: " << floor << "\n"
                << "Наличие кухни: " << (hasKitchen ? "Да" : "Нет") << "\n"
                << "Наличие ванны: " << (hasBathroom ? "Да" : "Нет") << "\n"
                << "Наличие туалета: " << (hasToilet ? "Да" : "Нет") << "\n"
                << "Наличие подвала: " << (hasBasement ? "Да" : "Нет") << "\n"
                << "Наличие балкона: " << (hasBalcony ? "Да" : "Нет") << "\n";
        }

        // Перегрузка оператора сравнения для сравнения квартир по площади
        bool operator==(const ApartmentParams& other) const {
            return squareMeters == other.squareMeters;
        }

        // Перегрузка оператора сравнения для сравнения квартир по количеству комнат
        bool operator>(const ApartmentParams& other) const {
            return roomCount > other.roomCount;
        }
    };

} // namespace std
using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    // Пример использования структуры ApartmentParams
    ApartmentParams apartment1(80.5, 3, 2000, 4, true, true, true, false, true);
    ApartmentParams apartment2(65.0, 2, 1995, 2, true, true, true, true, false);

    // Вывод информации о квартирах
    cout << "Квартира 1:\n";
    apartment1.display();
    cout << "\nКвартира 2:\n";
    apartment2.display();

    // Пример использования перегруженных операторов
    if (apartment1 == apartment2) {
        cout << "\nКвартиры имеют одинаковую площадь.\n";
    }
    else if (apartment1 > apartment2) {
        cout << "\nКвартира 1 имеет больше комнат, чем квартира 2.\n";
    }
    else {
        cout << "\nКвартира 2 имеет больше комнат, чем квартира 1.\n";
    }

    return 0;
}
