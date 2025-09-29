#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n = 10;  // кількість елементів
    long double a0 = 1, a1 = 3, an; // початкові значення

    cout << "a0 = " << a0 << endl; // вивід перших двох елементів
    cout << "a1 = " << a1 << endl;

    for (int i=3; i<=n; i++) 
    {
        an = pow(2*a1 -3*a0, 2); // рекурентна формула
        cout<<"a"<< i <<" = "<<an<<endl;
        a0 = a1;  // зсув значень
        a1 = an;
    }

    return 0;
}