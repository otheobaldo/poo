#include <iostream>
using namespace std;
double galaoLitro = 0.264179;
char opcao;
int main()
{
    do
    {
        double litrosGasolina, milhas, rendimento;
        cout << "Insira o número de litros de gasolina e o número de milhas: \n";
        cin >> litrosGasolina >> milhas;
        rendimento = milhas/(litrosGasolina*galaoLitro);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "O rendimento é de " << rendimento << " milhas/galão." << endl
             << "Deseja continuar? (s/n)\n";
        cin >> opcao;        
    }
    while (opcao == 's');
    return 0;
}