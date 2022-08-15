#include <iostream>
using namespace std;

char opcao;
double taxaInflacao(double vAnt, double vAtual);
double aumento(double precoAtual, double taxa);

int main()
{
    do
    {
        double valorAtual, valorAnt, taxa;
        int anos;
        cout << "Insira o preço de um item no ano passado e hoje: \n";
        cin >> valorAnt >> valorAtual;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);

        taxa = taxaInflacao(valorAnt, valorAtual);

        cout << "A taxa de inflação é " << taxa
             << "%." << endl
             << "Para o cálculo da previsão do preço do produto\n"
             << "digite a quantidade de anos: ";
        cin >> anos;
        cout << "O produto em " << anos << " ano(s) custará R$" 
             << valorAtual +(aumento(valorAtual, taxa)*anos) << endl            
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

double aumento(double precoAtual, double taxa)
{
    return (precoAtual*taxa/100);
}