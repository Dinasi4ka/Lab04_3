// Lab04_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Війчук Діана
//Лабораторна робота 4.3
//Табуляція функції, заданої формулою: функція з параметрами
//Варіант 2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double  a, b, c, F, x, xp, xk, dx;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << " |" << setw(10) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x + 5 < 0 && c == 0)
            F = 1 / (a * x) - b;
        else
            if (x + 5 > 0 && c != 0)
                F = (x - a) / x;
            else
                F = (10 * x) / (c - 4);

        cout << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}

