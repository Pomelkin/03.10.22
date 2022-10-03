#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    long double f = 0, x, sum = 0, xn = 0, e;
    int n = 0;
    
    do
    {
        cout << "введите x (|x| < 1) и e (эпсилон)\n";    // проверка ввода
        cin >> x >> e;
    } while (abs(x) >= 1 || e <= 0);         
    
    xn = x;
    sum += xn;
    
    while (abs(sum) < e) // цикл по поиску f(x)
    {
        n += 1;
        sum += xn * ((((-1) * ((2 * n - 1) * (2 * n - 1))) / (2 * n)) * (x * x)); // (n-1) + n член последовательности
        xn = xn * ((((-1) * ((2 * n - 1) * (2 * n - 1))) / (2 * n)) * (x * x)); // (n-1)-ый член последовательности
    }
    
    cout << "моя программа: " << sum << "\nфункция из интернета: " << log(x + sqrt(x * x + 1));
}