#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    long double an, e=0.0001, s=0;   //задємо змінні і сталі
    int n=1;  //1 номер послідовності
        do 
        {
           an=((n*n*n)/(n+1))*pow(e,-n);  //обрахунок для n
           s=s+an;  //додавання
           n=n+1;  //збільшення номеру
        }
        while (fabs(an)>=e);    //обмеження
        cout<<"Сума членів даної послідовності: s = "<<s<<endl;
    return 0;
}
