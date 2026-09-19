// Лабораторная работа № 1. Вариант 2.
// Выполнил: Бокло Д. А., группа ПИ-53.

#include <iostream>

using namespace std;

// ===== Расчётные функции варианта =====

// площадь квадрата
double calculateSquare(double a)
{
    return a * a;
}

// Периметр квадрата
double squarePerimeter(double a)
{
    return 4 * a;
}

// ===== Главная функция: меню =====

int main() {

int choice;
double x;

do {
cout << "\n=== Вариант 2: расчёты для квадрата ===\n";
cout << "1. Площадь\n";
cout << "2. Периметр\n";
cout << "0. Выход\n";

cout << "Выберите пункт: ";
cin >> choice;

switch (choice) {

case 1:
cout<<"Введите число: ";
cin>>x;
cout<<"Результат: "
<<calculateSquare(x)<<endl;
break;

case 2:
cout <<"Введите число: ";
cin>>x;
cout<<"Результат: "
<<squarePerimeter(x)<<endl;
break;


case 0:
cout << "Работа завершена.\n";
break;

default:
cout << "Такого пункта нет.\n";
}

} while (choice != 0);

return 0;
}
