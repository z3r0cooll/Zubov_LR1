#include <iostream>

// Прототипы функций для каждого действия
void action_1();
void action_2();
void action_3();
void action_4();
void action_5();

// Функция для вывода меню
void display_menu() {
    std::cout << "Меню:" << std::endl;
    std::cout << "1. Вычисление объема параллелепипеда" << std::endl;
    std::cout << "2. Произведение цифр четырехзначного числа" << std::endl;
    std::cout << "3. Наибольшее из 3-х чисел" << std::endl;
    std::cout << "4. Существование треугольника" << std::endl;
    std::cout << "5. Текстовая трансляция цифры" << std::endl;
    std::cout << "0. Выход" << std::endl;
    std::cout << "Выберите пункт меню: ";
}

// Реализация функций для каждого действия
void action_1() {
    std::cout << "Вы выбрали пункт 1: Вычисление объема параллелепипеда" << std::endl;
    // Здесь будет реализация действия для пункта 1
}

void action_2() {
    std::cout << "Вы выбрали пункт 2: Произведение цифр четырехзначного числа" << std::endl;
    // Здесь будет реализация действия для пункта 2
}

void action_3() {
    std::cout << "Вы выбрали пункт 3: Наибольшее из 3-х чисел" << std::endl;
    // Здесь будет реализация действия для пункта 3
}

void action_4() {
    std::cout << "Вы выбрали пункт 4: Существование треугольника" << std::endl;
    // Здесь будет реализация действия для пункта 4
}

void action_5() {
    std::cout << "Вы выбрали пункт 5: Текстовая трансляция цифры" << std::endl;
    // Здесь будет реализация действия для пункта 5
}

int main() {
    int choice;
    while (true) {
        display_menu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                action_1();
                break;
            case 2:
                action_2();
                break;
            case 3:
                action_3();
                break;
            case 4:
                action_4();
                break;
            case 5:
                action_5();
                break;
            case 0:
                std::cout << "Выход из программы." << std::endl;
                return 0;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
        }
    }
    return 0;
}
