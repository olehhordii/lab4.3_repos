// Lab4.3.cpp
// Гордій Олег
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 3


#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>
#include <iomanip>

int main()
{
    double a;
    double b;
    double c;
    double x;
    double xp;
    double xk;
    double dx;
    double F; //формула

    cout << " a = " << endl; cin >> a;
    cout << " b = " << endl; cin >> b;
    cout << " c = " << endl; cin >> c;
    cout << " xp = " << endl; cin >> xp;
    cout << " xk = " << endl; cin >> xk;
    cout << " dx = " << endl; cin >> dx;

    cout << fixed;
    cout << "----------------" << endl;
    cout << "|" << setw(5) << "F" << " |" << endl;
    cout << "----------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (a < 0 && c != 0)
            F = a * pow(x, 2) + b * x + c;
        else
            if (a > 0 && c == 0)
                F = (-a) / (x - c);
            else
                F = a * (x - c);

        cout << "|" << setw(7) << setprecision(2) << F << endl;

        x += dx;
    }
    cout << "----------------" << endl;
    cin.get();
    return 0;
}
