#include <iostream>
using namespace std;

int main()
{
    char opcao = 's';
    double custo, taxaInflacao, nAnos;
    while (opcao == 's')
    {
        cout << "Qual o custo do item? ";
        cin >> custo;
        cout << "Qual a taxa de inflação do item? ";
        cin >> taxaInflacao;
        cout << "Quantos anos? ";
        cin >> nAnos;

        double precoAjustado = custo + custo *(taxaInflacao/100) * nAnos;
        cout << precoAjustado << endl
             << "Quer continuar? (s/n): ";
        cin >> opcao;
    }

    return 0;
}