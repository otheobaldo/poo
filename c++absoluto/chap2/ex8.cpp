#include <iostream>
using namespace std;

int main()
{
    int programasFeitos, exame;
    cout << "Insira a nota do exame e a quantidade de programas feitos: ";
    cin >> exame >> programasFeitos;

    if ((exame >= 60) && (programasFeitos >= 10))
        cout << "Aprovado\n";
    else
        cout << "Reprovado\n";
    return 0;
}