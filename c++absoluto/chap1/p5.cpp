#include <iostream>
using namespace std;

int main()
{
    int capacidadeMax, nPessoas;
    cout << "Informe a capacidade máxima e número de pessoas que comparecerão à conferência: ";
    cin >> capacidadeMax >> nPessoas;

    if (nPessoas > capacidadeMax)
        cout << "Precisam sair " << nPessoas - capacidadeMax << " pessoa(s).\n";
    else
        cout << "A conferência está de acordo com as normas.\n"; 
    return 0;
}