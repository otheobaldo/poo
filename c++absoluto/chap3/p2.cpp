#include <iostream>
using namespace std;

char opcao;
double taxaInflacao(double vAnt, double vAtual);

int main()
{
    do
    {
        double valorAtual, valorAnt;
        cout << "Insira o preço de um item no ano passado e hoje: \n";
        cin >> valorAnt >> valorAtual;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);

        cout << "A taxa de inflação é " << taxaInflacao(valorAnt, valorAtual) 
             << "%." << endl
             << "Deseja continuar? (s/n)\n";
        cin >> opcao;        
    }
    while (opcao == 's');
    return 0;
}

double taxaInflacao(double vAnt, double vAtual)
{
    return ((vAtual/vAnt)*100)-100;
}