#include <iostream>
using namespace std;

int main()
{
    int oNumero;
    cout << "Digite um número inteiro: ";
    cin >> oNumero;

    double m = 5.0;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << m;

}