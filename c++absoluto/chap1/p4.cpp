#include <iostream>
using namespace std;

int main()
{
    double quantia, taxaJuros, duracao;
    cout << "Insira a quantia: ";
    cin >> quantia;
    cout << "Insira a taxa de juros (em porcentagem): ";
    cin >> taxaJuros;
    cout << "Insira a duração do empréstimo (em meses): ";
    cin >> duracao;

    double anos = duracao/12;

    cout.setf(ios::fixed);
    cout.setf(ios::showbase);
    cout.precision(2);
    cout << "Valor nominal requerido R$" << quantia - (quantia*(taxaJuros/100))*anos << endl
         << "Pagamento mensal R$" << (quantia/duracao) << endl;

    return 0;
}