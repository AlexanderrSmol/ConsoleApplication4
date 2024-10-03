#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);

    int a1[6] = {5, -12, 9, 13, 15, -7};
    float Sum = { 0.0 };
    float sred = { 0.0 };

    for (int i : a1)
    {
        Sum += i;
    }
    sred = Sum / 6;

    cout << "Сумма = " << Sum << "\tСр. знач. = " << sred << endl;

    cout << endl << "Отрицательные: ";
    for (int i : a1) 
    {
        if (i < 0) cout << i << ", ";
    }

    cout << endl << "Положительные: ";
    for (int i : a1)
    {
        if (i > 0) cout << i << ", ";
    }
    cout << endl;

    cout << endl << "Чётные: ";
    for (int i : a1)
    {
        if (i % 2 == 0) cout << i << ", ";
    }

    cout << endl << "Нечётные: ";
    for (int i : a1)
    {
        if (i % 2 != 0) cout << i << ", ";
    }
    cout << endl;
}