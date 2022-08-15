#include <iostream>
using namespace std;

int main()
{
    double custo = 100, taxa = 1.5, pagarMes, soma = 0;
    int qntMeses = 0;
    while (custo > 0)
    {
    pagarMes = custo*taxa/100;    
    soma += pagarMes;
    qntMeses += 1;
    custo = custo - (50-pagarMes);
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Soma paga em juros: R$" << soma << endl 
         << "Quantidade de meses para pagar a compra: " << qntMeses << endl;
    return 0;
}