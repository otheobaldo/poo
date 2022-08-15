#include <iostream>
using namespace std;

int main()
{
    int temperatura, pressao;
    cout << "Insira a temperatura e a pressão: ";
    cin >> temperatura >> pressao;

    if ((temperatura >= 100) || (pressao >= 200))
        cout << "Alerta\n";
    else
        cout << "OK\n";
    return 0;
}