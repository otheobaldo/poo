#include <iostream>
using namespace std;

int main()
{
    double economias, despesas;
    cout << "Insira as economias e as despesas: ";
    cin >> economias, despesas;
    if (economias >= despesas)
    {
        cout << "Solvente\n";
        economias -= despesas;
        despesas = 0;
    }
    else
        cout << "Falido\n";
    return 0;
}